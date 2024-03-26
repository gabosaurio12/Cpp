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
bool estaVacia (nodo *cabeza){
	if (cabeza == NULL)
		return true;
	else
		return false;
}

void insertarOrdenado (nodo *n, int dato) {
	if (estaVacia(n)){
		n = crearNodo(dato);
	} else if (n -> valor < dato){
		nodo *ap = new nodo;
		ap -> valor = dato;

		nodo *aux;
		aux = n -> siguiente;
		
		n -> siguiente = ap;
		ap -> siguiente = aux;
	}

	else
		insertarOrdenado(n -> siguiente, dato);
}

void imprimir(nodo *n){
	while (n != NULL){
		cout << n -> valor << " -> "; 
		n = n -> siguiente;
	}
}

int main(){
	nodo *cabeza = NULL;

	insertarOrdenado(cabeza, 2);
	insertarOrdenado(cabeza, 4);
	insertarOrdenado(cabeza, 6);
	insertarOrdenado(cabeza, 8);

	imprimir(cabeza);

	return 0;
}