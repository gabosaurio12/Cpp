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


void insOrdRec(nodo *&n, int dato) {
	if (estaVacia(n)){
		n = crearNodo(dato);
	}
	else{
		if (n -> valor >= dato){
			nodo *ap = new nodo;
			ap -> valor = dato;
			ap -> siguiente = n;
			n = ap;
		}
		else
			insOrdRec(n -> siguiente, dato);
	}
}

void imprimirRecursivo(nodo *n) {
	while (n != NULL){
		cout << n -> valor << " -> ";
		n = n -> siguiente;
	}
}

int main() {
	nodo *cabeza = NULL;

	insOrdRec(cabeza, 8);
	insOrdRec(cabeza, 2);
	insOrdRec(cabeza, 4);
	insOrdRec(cabeza, 7);
	insOrdRec(cabeza, 9);
	insOrdRec(cabeza, 3);

	imprimirRecursivo(cabeza);

	return 0;
}