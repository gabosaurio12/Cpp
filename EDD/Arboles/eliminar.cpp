#include <iostream>

using namespace std;

struct nodo {
    int valor;
    nodo *der;
    nodo *izq;
};

int buscar(nodo *&act, nodo *&ant, int dato) {
    bool encontrado = 0;

    while (!encontrado && act != NULL) {
        if (act->valor == dato)
            encontrado == 1;
        else if (act->valor < dato) {
            ant = act;
            act = act->der;
        }
        else {
            ant = act;
            act = act->izq;
        }
    }
    return encontrado;
}

void eliminar (nodo *&raiz, int dato) {
    nodo *anterior = NULL;
    nodo *actual = raiz;

    if (buscar(actua, anterior, dato)) {
        if (actual->izq == NULL && actual->der == NULL)
            delete actual;
        else {
            nodo *apAux = actual;
            while (actual->izq != NULL && actual->der != NULL) {
                if (actual->der != NULL && actual->izq == NULL)
                    actual = actual->der;
                else {
                    if (actual->izq != NULL && actual->der == NULL)
                        actual = actual->der;
                    else {
                        nodo *antAux = actual;
                        actual = actual->der;
                        while (actual != NULL) {
                            antAux = actual;
                            actual = actual->izq;
                        }
                        actual = antAux;
                    }
                }
            }
            int aux = actual->valor;
            actual->valor = apAux->valor;
            apAux->valor = aux;

            delete actual;
        }
    }
}

int main() {

    return 0;
}
