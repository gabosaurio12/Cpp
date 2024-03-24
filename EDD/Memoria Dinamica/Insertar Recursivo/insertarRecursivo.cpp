#include <iostream>

using namespace std;

struct nodo{
	int valor;
	nodo sig;
};

bool buscarRecursivo(nodo *n, int dato){
	if (n != NULL)
		if (n -> valor == dato)
			return true;
		else
			buscarRecursivo(n -> sig, dato);
	else
		return false;
}

bool estaVacia(nodo *cabeza){
	if (cabeza == NULL)
		return true;
	else
		return false;
}

void insertaRecursivo(nodo *&n, int dato){
	if (estaVacia(n)){
		cout << "Lista vacia \n";
		nodo *ap = new nodo;
		ap -> dato = dato;
		ap -> sig = NULL;
		n = ap;
	}

	else{
		if (n -> sig == NULL){
			nodo *ap = new nodo;
			ap -> dato = dato;
			n -> sig = ap;
		}
		else
			insertaRecursivo(n -> sig, dato);
	}

}

void imprimirRecursivo(nodo *n){
	if (n != NULL){
		cout << "Dato " << n-> dato << endl;
		imprimirRecursivo(n -> sig);
	}
}