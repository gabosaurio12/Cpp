#include <iostream>

using namespace std;

class ArbolBinario {
private:
	int valor;
	ArbolBinario* izq;
	ArbolBinario* der;

public:
	ArbolBinario() {
		izq = nullptr;
		der = nullptr;
	}

	void agregar(ArbolBinario &nodo, int valor) {
		if (nodo == nullptr) {
			nodo = new ArbolBinario(valor);
		}
		else if (nodo.izq != nullptr && nodo.der != nullptr)
			agregar(nodo.izq, valor);
		else if (nodo.izq == nullptr) 
			agregar(nodo.izq, valor);
		else
			agregar(nodo.der, valor);
	}

	void imprimir(ArbolBinario nodo) {
		if (nodo != nullptr) {
			cout << nodo.valor << " ";
			imprimir(nodo.izq);
			imprimir(nodo.der);
		}
	}
};

int main() {
	ArbolBinario arbol();

	for (int i = 1; i < 7; i++) {
		arbol.agregar(i);
	}
}