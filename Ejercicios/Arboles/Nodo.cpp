#include <iostream>

using namespace std;

class Nodo {
	private:
		int valor;
		Nodo* der;
		Nodo* izq;

	public:

		Nodo(int valor) {
			this->valor = valor;
			der = nullptr;
			izq = nullptr;
		}

		void setIzq(Nodo* nodo) {
			izq = nodo;
		}

		Nodo*& getIzq() {
			return izq;
		}

		void setDer(Nodo* nodo) {
			der = nodo;
		}

		Nodo*& getDer() {
			return der;
		}

		int getValor() {
			return valor;
		}
};

class ArbolBinario {
	private:
		Nodo* raiz;

		void agregarNodo(Nodo*& nodo, int valor) {
			if (nodo == nullptr) {
				nodo = new Nodo(valor);
			} else if (valor < nodo->getValor()) {
				agregarNodo(nodo->getIzq(), valor);
			} else {
				agregarNodo(nodo->getDer(), valor);
			}
		}

		void imprimir(Nodo* nodo) {
			if (nodo != nullptr) {
				imprimir(nodo->getIzq());
				cout << nodo->getValor() << " ";
				imprimir(nodo->getDer());
			}
		}

	public:
		ArbolBinario() {
			raiz = nullptr;
		}

		void agregar(int valor) {
			agregarNodo(raiz, valor);
		}

		void imprimir() {
			imprimir(raiz);
		}

};

int main() {
	ArbolBinario arbol;

	arbol.agregar(5);
	arbol.agregar(4);
	arbol.agregar(3);
	arbol.agregar(8);
	arbol.agregar(10);

	arbol.imprimir();

	return 0;
}