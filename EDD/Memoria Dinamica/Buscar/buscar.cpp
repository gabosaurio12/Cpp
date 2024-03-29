#include <iostream>

using namespace std;

struct nodo{
    int valor;
    nodo *sig;
};

void nuevoNodo(nodo *n){
    cout << "Ingresa el valor del nodo \n";
    cin >> n -> valor;
    n -> sig = NULL;
}

void insertarFin(nodo *ant, nodo *nuevo){
    ant -> sig = nuevo;
    nuevo -> sig = NULL;
}

int buscar(nodo *siguiente, int busqueda){
	int c = 1;
	while (siguiente != NULL){
		if (siguiente -> valor == busqueda){
			return c;
		}
		else{
			c++;
			siguiente = siguiente -> sig;
		}
	}
	return -1;
}

void escribirLista(nodo *siguiente){
    while (siguiente != NULL){
        cout << " -> " << siguiente -> valor;
        siguiente = siguiente -> sig;
    }
    cout << "\n";
}

int main(){
	nodo *cab = NULL;	

	nodo *p1 = NULL;
	p1 = new nodo;
	nuevoNodo(p1);

	cab = p1;

	nodo *p2 = NULL;
	p2 = new nodo;
	nuevoNodo(p2);
	insertarFin(p1,p2);

	nodo *p3 = NULL;
	p3 = new nodo;
	nuevoNodo(p3);
	insertarFin(p2,p3);

	nodo *p4 = NULL;
	p4 = new nodo;
	nuevoNodo(p4);
	insertarFin(p3,p4);

	escribirLista(cab);

	int val;
	cout << "Que valor quieres buscar? \n";
	cin >> val;

	int resBuscar = buscar(cab,val);
	if (resBuscar != -1){
		cout << "Tu valor se encontro en la posicion " << resBuscar << "\n";
	}
	else{
		cout << "Tu valor no se encontro \n";
	}

	return 0;
}