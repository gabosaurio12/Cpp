#include <iostream>

using namespace std;

struct nodo {
	int valor;
	nodo *siguiente;
};

void push(nodo *&tope, int elemento) {
	nodo *aux = new nodo;
	aux->valor = elemento;
	aux->siguiente = tope;
	tope = aux;
}

void pull(nodo *&tope, int &elemento) {
	nodo *aux;
	if (tope != NULL) {
		aux = tope;
		elemento = tope->valor;
		tope = tope->siguiente;
		delete aux;
	}
}

int main() {
	nodo *tope = NULL;

	for (int i = 0; i < 5; i++) {
		int dato;
		cin >> dato;
		push(tope, dato);
	}

	for (nodo *aux = tope; aux != NULL; aux = aux->siguiente) {
		cout << aux->valor << " -> ";
	}
	cout << "\n";


	return 0;
}