#include <iostream>

using namespace std;

struct nodo {
	int valor;
	nodo *siguiente;
};

void agregar(nodo *&frente, nodo *&cola, int dato) {
	nodo *nuevo = new nodo;
	nuevo->valor = dato;
	nuevo->siguiente = NULL;
	if(frente == NULL)
		frente = nuevo;
	else
		cola->siguiente = nuevo;
	cola = nuevo;
}

void push(nodo *&top, int dato) {
	nodo *nuevo = new nodo;
	nuevo->valor = dato;
	nuevo->siguiente = top;
	top = nuevo;
}

int pull(nodo *&top) {
	int dato = top->valor;
	nodo *aux = top;
	top = top->siguiente;
	delete aux;
	return dato;
}

void colaPar(nodo *&top, nodo *&frente, nodo *&cola) {
	if (top != NULL) {
		int dato = pull(top);
		if (dato % 2 == 0)
			agregar(frente, cola, dato);
		colaPar(top, frente, cola);
	}
}

void imprimir(nodo *p) {
	while (p != NULL) {
		cout << p->valor << " -> ";
		p = p->siguiente;
	}
	cout << "\n";
}

int main() {
	nodo *top, *cab, *cola;
	top = NULL;
	cab = NULL;
	cola = NULL;
	int dato;

	for(int i = 0; i < 5; i++){
		cin >> dato;
		push(top, dato);
	}
	imprimir(top);

	colaPar(top, cab, cola);

	imprimir(cab);
	
	return 0;
}