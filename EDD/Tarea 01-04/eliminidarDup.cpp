#include <iostream>

using namespace std;

struct nodo {
	int valor;
	nodo *sig;
};

nodo* crearNodo (int dato) {
	nodo *ap = new nodo;
	ap -> valor = dato;
	ap -> sig = NULL;

	return ap;
}

void eliminarDuplicados(nodo *&l1, nodo *&l2) {
	nodo *actualL1 = l1;
	nodo *auxL1 = l1;
	nodo *anteriorL1 = NULL;
	nodo *actualL2 = l2;
	nodo *auxL2 = l2;
	nodo *anteriorL2 = NULL;

	while (auxL1 != NULL) {
		auxL1 = auxL1->sig;

		while (auxL2 != NULL) {
			auxL2 = auxL2->sig;

			if (actualL1->valor == actualL2->valor) {
				if (anteriorL1 != NULL)
					anteriorL1->sig = actualL1->sig;
				else
					l1 = actualL1->sig;

				delete actualL1;

				if (anteriorL2 != NULL)
					anteriorL2->sig = actualL2->sig;
				else
					l2 = actualL2->sig;

				delete actualL2;
			}
		}
	}
}

void insertarRecursivo(nodo *&n, int dato) {
	if (n == NULL)
		n = crearNodo(dato);

	else if (n -> sig == NULL) {
		n -> sig = crearNodo(dato);
	}
	
	else
		insertarRecursivo(n -> sig, dato);
}

void imprimirRecursivo(nodo *n) {
	if (n != NULL){
		cout << n -> valor << " -> ";
		imprimirRecursivo(n -> sig);
	}
}



int main(){
	int nNodosL1, nNodosL2;
	nodo *l1 = NULL;
	nodo *l2 = NULL;

	cout << "Cuantos nodos tiene la lista 1 ";
	cin >> nNodosL1;

	cout << "Cuantos nodos tiene la lista 2 ";
	cin >> nNodosL2;
	
	for (int i = 0; i < nNodosL1; i++){
		int dato;
		cout << "Ingresa un elemento de la lista 1 ";
		cin >> dato;

		insertarRecursivo(l1, dato);
	}

	imprimirRecursivo(l1);
	cout << "\n";

	for (int i = 0; i < nNodosL2; i++){
		int dato;
		cout << "Ingresa un elemento de la lista 2 ";
		cin >> dato;

		insertarRecursivo(l2, dato);
	}
	imprimirRecursivo(l2);
	cout << "\n";

	cout << "Ahora eliminamos los duplicados \n";

	eliminarDuplicados(l1, l2);

	cout << "Lista 1 \n";
	imprimirRecursivo(l1);
	cout << "\n";

	cout << "Lista 2 \n";
	imprimirRecursivo(l2);
	cout << "\n";

	return 0;
}