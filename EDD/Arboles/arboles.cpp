#include <iostream>

using namespace std;

struct nodo {
    int valor;
    nodo *der;
    nodo *izq;
};

void buscar(nodo *raiz, int dato, nodo *&actual, nodo *&anterior) {
    bool encontrado = 0;
    anterior = NULL;
    actual = raiz;
    while (!encontrado && actual != NULL) {
        if (actual->valor == dato)
            encontrado = 1;
        else {
            anterior = actual;
            if (actual->valor > dato)
                actual = actual->izq;
            else
                actual = actual->der;
        }
    }
}

void insertar(nodo *&raiz, int dato) {
    nodo *nuevo, *actual, *anterior;
    buscar(raiz, dato, actual, anterior);
    if (actual != NULL)
        cout << "Elemento duplicado \n";
    else {
        nuevo = new nodo;
        nuevo->valor = dato;
        nuevo->izq = NULL;
        nuevo->der = NULL;

        if (anterior == NULL)
            raiz = nuevo;
        else {
            if (anterior->valor > dato)
                anterior->izq = nuevo;
            else
                anterior->der = nuevo;
        }
    }
}

void inOrden(nodo *raiz) {
    if (raiz != NULL) {
        inOrden(raiz->izq);
        cout << " " << raiz->valor;
        inOrden(raiz->der);
    }
}

void preOrden(nodo *raiz) {
    if (raiz != NULL) {
        cout << raiz->valor << " ";
        preOrden(raiz->izq);
        preOrden(raiz->der);
    }
}

void postOrden(nodo *raiz) {
	if (raiz != NULL) {
		postOrden(raiz->izq);
		postOrden(raiz->der);
		cout << " " << raiz->valor;
	}
}

int contarNodo(nodo *raiz, int &c) {
	if (raiz != NULL) {
		c++;
		contarNodo(raiz->izq, c);
		contarNodo(raiz->der, c);
	}
	return c;
}

int profundidad(nodo *raiz) {
	nodo *izqui = raiz;
	nodo *dere = raiz;
	int d, i;
	d = 0;
	i = 0;

	while (izqui != NULL) {
		i++;
		izqui = izqui->izq;
	}
	while (dere != NULL) {
		d++;
		dere = dere->der;
	}

	if (d > i)
		return d;
	else
		return i;
}

void auxAltura (nodo *nod, int a, int &altura) {
    if (nod->izq)
        auxAltura(nod->izq, a + 1, altura);
    if (nod->der)
        auxAltura(nod->der, a + 1, altura);
    if (esHoja(nod), && a > altura)
        altura = a;
}

int alturaArbol(nodo *raiz) {
    int altura = 0;
    auxAltura(raiz, 0, altura);
    return altura + 1;
}

int main() {
    nodo *raiz = NULL;

    for (int i = 0; i < 5; i++){
        int dato;
        cin >> dato;
        insertar(raiz, dato);
    }

    cout << "inOrden \n";
    inOrden(raiz);
    cout << "\n";
    
    cout << "preOrden \n";
    preOrden(raiz);
    cout << "\n";

	cout << "postOrden \n";
    postOrden(raiz);
    cout << "\n";

    int c = 0;
    cout << contarNodo(raiz, c) << "\n";

    cout << profundidad(raiz) << "\n";

    return 0;
}
