#include <iostream>

using namespace std;

struct nodo {
	int valor;
	nodo *siguiente;
};

nodo* crearNodo (int dato) {
	nodo *ap = new nodo;
	ap -> valor = dato;
	ap -> siguiente = NULL;
	return ap;
}

bool estaVacia (nodo *cabeza) {
	if (cabeza == NULL)
		return true;
	else
		return false;
}

void eliminarNodo(nodo *&n, int dato) {
	nodo *actual = n;
	nodo *anterior = NULL;
	nodo *aux = n;

	while (aux != NULL){
		actual = aux;
		aux = aux -> siguiente;

		if (actual -> valor == dato){
			if (anterior != NULL)
				anterior -> siguiente = actual -> siguiente;
			else
				n = actual -> siguiente;

			delete actual;
		}
		anterior = actual;
	}
}

void imprimirRecursivo(nodo *n) {
	while (n != NULL){
		cout << n -> valor << " -> ";
		n = n -> siguiente;
	}
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

int main(){
	nodo *cabeza = NULL;

	insertarRecursivo(cabeza, 2);
	insertarRecursivo(cabeza, 6);
	insertarRecursivo(cabeza, 3);
	insertarRecursivo(cabeza, 8);
	insertarRecursivo(cabeza, 3);
	insertarRecursivo(cabeza, 8);

	imprimirRecursivo(cabeza);

	eliminarNodo(cabeza, 2);
	eliminarNodo(cabeza,3);

	cout << "\n";

	imprimirRecursivo(cabeza);

	return 0;
}