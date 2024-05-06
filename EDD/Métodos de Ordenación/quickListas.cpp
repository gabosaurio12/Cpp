#include <iostream>

using namespace std;

struct nodo {
	int valor;
	nodo *siguiente;
};

void insertar(nodo *&n, int nValor) {
	if (n == NULL){
		nodo *ap = new nodo;
		ap->valor = nValor;	
		ap->siguiente = NULL;

		n = ap;
    }
	else
		insertar(n->siguiente, nValor);
}

void imprimirLista(nodo *n) {
	while (n != NULL)
		cout << n->valor << " -> ";
	cout << "\n";
}

int main() {
	nodo *cabeza = NULL;

	cout << "Ingresa tus datos, para terminar ingresa un dato negativo \n";
	int band = 1;
	while (band) {
		int dato;
		cout << "Dato ";
		cin >> dato;
		if (dato < 0)
			band = 0;
		else
			insertar(cabeza, dato);
	}

	imprimirLista(cabeza);
	
	return 0;
}
