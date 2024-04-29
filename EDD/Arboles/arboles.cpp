#include <iostream>

using namespace std;

struct nodo {
    int valor;
    nodo *der;
    nodo *izq;
};

void buscar(nodo *&raiz, int dato, nodo *&actual, nodo *&anterior) {
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
    if (!encontrado)
        cout << "No existe \n" << dato;
    else
        cout << dato << " existe \n";
}

void insertar(nodo *&raiz, int dato) {
    nodo *nuevo, *actual, *anterior;
    buscar(raiz, dato, actual, anterior);
    if (actual != NULL)
        cout << "Elemento duplicado \n";
    else {
        nodo *nuevo = new nodo;
        nuevo->valor = dato;
        nuevo->izq = NULL;
        nuevo->der = NULL;

        if (anterior == NULL)
            raiz = nuevo;
        else{
            if (anterior->valor > dato)
                anterior->izq = nuevo;
            else
                anterior->der = nuevo;
        }
}

void imprimirRH(nodo *raiz) {
    cout << raiz->valor << " " << raiz->izq->valor << " " << raiz->der->valor << "\n";
}

void imprimir(nodo *raiz) {
    imprimirRH(raiz);
    if (raiz->izq != NULL)
        imprimir(raiz->izq);
    if (raiz->der != NULL)
        imprimir(raiz->der);
}

int main() {
    nodo *raiz;
    for (int i = 0; i < 6; i++){
        int dato;
        cin >> dato;
        insertar(raiz, dato);
    }
    imprimir(raiz);

    return 0;
}
