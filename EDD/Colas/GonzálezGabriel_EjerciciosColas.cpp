#include <iostream> 

using namespace std;

struct nodo {
	int valor;
	nodo *siguiente;
};

void inicializar(nodo *&frente, nodo *&final) {
	frente = NULL;
	final = NULL;
}

void consultarFrente(nodo *frente) {
	if (frente != NULL)
		cout << frente->valor << "\n";
}

void agregar(nodo *&final, nodo *&frente, int dato) {
	nodo *aux = new nodo;
	aux->valor = dato;
	aux->siguiente = NULL;
	if (final == NULL)
		frente = aux;
	else
		final->siguiente = aux;
	final = aux;

}

void liberar(nodo *&frente) {
	nodo *aux = frente;
	frente = frente->siguiente;
	delete aux;
}

int sacar(nodo *&frente, nodo *&final) {
	nodo *aux = frente;
	int valor = aux->valor;
	frente = frente->siguiente;
	if (frente == NULL) {
		final = NULL;
	}
	delete aux;
	return valor;
}

int elementos(nodo *&frente, nodo *&final) {
	nodo *aux;
	aux = frente;
	int c = 0;
	while (aux->valor != final->valor) {
		c++;
		aux = frente->siguiente;
	}

	return c;
}

void colaLlena(nodo *&frente, nodo *&final) {
	if (final != NULL){
		cout << "Cola Llena \n";
		//cout << "Elementos " << elementos(frente, final) << "\n";
	}

	else
		cout << "Cola Vacia \n";
}

void vaciarCola(nodo *&frente, nodo *&final) {
	nodo *aux = frente;
	while (aux != NULL){
		aux = frente->siguiente;
		delete frente;
	}
	delete aux;
}

int main() {

	nodo *frente = NULL;
	nodo *final = NULL;

	for (int i = 0; i < 5; i++) {
		cout << "Valor nuevo ";
		int dato;
		cin >> dato;
		agregar(final, frente, dato);
	}

	nodo *aux = frente;
	for (int i = 0; i < 5; i++) {
		cout << aux->valor << " ";
		aux = aux->siguiente;
	}
	cout << "\n";


	colaLlena(frente, final);
	cout << 1;

	vaciarCola(frente, final);

	aux = frente;
	for (int i = 0; i < 5; i++) {
		if (aux != NULL){
			cout << aux->valor << " ";
			aux = aux->siguiente;
		}
		else
			cout << "Lista vacia ";
	}
	cout << "\n";

	
	return 0;
}