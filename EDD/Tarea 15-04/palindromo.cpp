#include <iostream>

using namespace std;

struct nodo {
	char valor;
	nodo *siguiente;
};

void imprimir(nodo *cab) {
	while (cab != NULL) {
		cout << cab->valor << " -> ";
		cab = cab->siguiente;
	}
	cout << "\n";
}

int longitud(string a) {
	int i = 0;
	while (a[i] != '\0')
		i++;
	return i;
}

void agregarCola(nodo *&frente, nodo *&final, char dato) {
	nodo *nuevo = new nodo;
	nuevo->valor = dato;
	nuevo->siguiente = NULL;

	if (frente == NULL)
		frente = nuevo;
	else
		final->siguiente = nuevo;

	final = nuevo;
}

void cola(string cad, int f, nodo *&frente, nodo *&final) { 
	int i = 0;
	while (i < f + 1) {
		agregarCola(frente, final, cad[i]);
		i++;
	}
}

void push(nodo *&tope, char dato) {
	nodo *nuevo = new nodo;
	nuevo->valor = dato;
	nuevo->siguiente = tope;
	tope = nuevo;
}

void pila(nodo *&tope, string cad, int i) {
	while (cad[i] != '\0') {
		push(tope, cad[i]);
		i++;
	}
}

int palindromo(string cad) {
	int central = longitud(cad) / 2 - 1;
	nodo *frente = NULL;
	nodo *final = NULL;
	cola(cad, central, frente, final);

	nodo *top = NULL;
	pila(top, cad, central + 1);
	
	int band = 1;
	int i = 0;
	nodo *auxFrente = frente;
	nodo *auxTop = top;
	while (band && i < central + 1) {
		if (auxFrente->valor != auxTop->valor)
			band = 0;
		else {
			auxFrente = auxFrente->siguiente;
			auxTop = auxTop->siguiente;
		}
		i++;
	}

	return band;
}

int main() {
	string cadena;
	getline(cin,cadena);

	if (palindromo(cadena))
		cout << "Es palindromo \n";
	else
		cout << "No es palindromo \n";

	return 0;
}