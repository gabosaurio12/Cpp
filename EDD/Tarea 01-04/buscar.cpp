#include <iostream>

using namespace std;

struct nodo{
	int valor;
	nodo *sig;	
};

nodo* crearNodo (int dato) {
	nodo *ap = new nodo;
	ap -> valor = dato;
	ap -> sig = NULL;
	return ap;
}

bool estaVacia (nodo *cabeza) {
	if (cabeza == NULL)
		return true;
	else
		return false;
}

int buscar(nodo *n, int busqueda){
	int c = 1;
	while (n != NULL){
		if (n -> valor == busqueda)
			return c;
		else{
			c++;
			n = n -> sig;
		}
	}
	return -1;
}

void insertarOrdenado (nodo *&n, int dato) {
	if (estaVacia(n)){
		n = crearNodo(dato);
	}
	else{
		if (n -> valor >= dato){
			nodo *ap = new nodo;
			ap -> valor = dato;
			ap -> sig = n;
			n = ap;
		}
		else
			insertarOrdenado(n -> sig, dato);
	}
}

void imprimirRecursivo(nodo *n) {
	while (n != NULL){
		cout << n -> valor << " -> ";
		n = n -> sig;
	}
}


int main(){
	nodo *cabeza = NULL;

	int nd;
	cout << "Cuantos datos vas a ingresar? ";
	cin >> nd;

	for (int i = 0; i < nd; i++){
		int dato;
		cout << "Ingresa el dato ";
		cin >> dato;
		insertarOrdenado(cabeza, dato);
	}

	imprimirRecursivo(cabeza);

	int db;
	cout << "\nQue dato quieres buscar? ";
	cin >> db;

	int pos = buscar(cabeza, db);

	if (!pos)
		cout << "Tu dato no se encontro \n";
	else
		cout << "Tu dato esta en la posicion " << pos << "\n";

	return 0;
}