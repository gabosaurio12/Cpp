#include <iostream>

using namespace std;

struct nodo{
	int valor;
	nodo *siguiente;
};

nodo* crearNodo (int dato){
	nodo *ap = new nodo;
	ap -> valor = dato;
	ap -> siguiente = NULL;
	return ap;
}

bool existeRecursivo(nodo *n, int valorB) {
	if (n != NULL)
		if (n -> valor == valorB)
			return true;
		else
			existeRecursivo(n -> siguiente, valorB);
	else
		return false;
}

bool estaVacia(nodo *cabeza){
	if (cabeza == NULL)
		return true;
	else
		return false;
}

void insertarRecursivo(nodo *&n, int dato) {
	if (estaVacia(n)){
		n = crearNodo(dato);
	}

	else if (n -> siguiente == NULL){
		n -> siguiente = crearNodo(dato);
	}
	else
		insertarRecursivo(n -> siguiente, dato);
}

void imprimirRecursivo(nodo *n){
	if (n != NULL){
		cout << "Dato " << n -> valor << "\n"; 
		imprimirRecursivo(n -> siguiente);
	}
}

int main(){
	nodo *cabeza = NULL;

	insertarRecursivo(cabeza, 2);
	insertarRecursivo(cabeza, 4);
	insertarRecursivo(cabeza, 6);
	insertarRecursivo(cabeza, 8);

	imprimirRecursivo(cabeza);

	return 0;
}