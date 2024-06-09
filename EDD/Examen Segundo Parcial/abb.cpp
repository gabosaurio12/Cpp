#include <iostream>

using namespace std;

struct nodo {
    int valor;
    nodo *izq;
    nodo *der;
};

bool buscar(nodo *&raiz, nodo *&act, nodo *&ant, int datoBuscar) {
    bool encontrado = 0;
    while (!encontrado && act != NULL) {
        if (datoBuscar == act->valor)
            encontrado = 1;
        else {
            ant = act;
            if (datoBuscar <= act->valor)
                act = act->izq;
            else
                act = act->der;
        }
    }
    return encontrado;
}

void insertar(nodo *&raiz, int dato) {
    nodo *actual = raiz;
    nodo *anterior = NULL;
    bool busqueda = buscar(raiz, actual, anterior, dato);
    if (busqueda)
        cout << "Elemento duplicado \nNo se insertara";
    else {
        nodo *nuevo = new nodo;
        nuevo->valor = dato;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        
        if (anterior == NULL)
            raiz = nuevo;

        else if (dato > anterior->valor)
            anterior->der = nuevo;
        else
            anterior->izq = nuevo;
    }
}

void imprimirABB(nodo *raiz) {
    if (raiz != NULL) {
        cout << raiz->valor << " ";
        imprimirABB(raiz->izq);
        imprimirABB(raiz->der);

    }
}

bool esHoja(nodo *nod) {
    if (nod->izq == NULL && nod->der == NULL)
        return 1;
    else
        return 0;
}

void eliminar(nodo *&raiz, int dato) {
    nodo *actual = raiz;
    nodo *padre = NULL;
    nodo *decendiente = NULL;
    bool termina = 0;

    while (!termina && actual != NULL) {
        if (dato == actual->valor) {
            if (esHoja(actual)) {
                if (padre != NULL) {
                    if (padre->der == actual)
                        padre->der = NULL;
                    else if (padre->izq == actual)
                        padre->izq = NULL;
                }

                delete actual;
                actual = NULL;
                termina = 1;
            }
            else {
                padre = actual;
                if (actual->der == NULL) {
                    decendiente = actual->izq;
                    while (decendiente->izq != NULL) {
                        padre = decendiente;
                        decendiente = decendiente->izq;
                    }
                }
                else {
                    decendiente = actual->der;
                    while (decendiente->der != NULL) {
                        padre = decendiente;
                        decendiente = decendiente->der;
                    }
                }

                int aux = actual->valor;
                actual->valor = decendiente->valor;
                decendiente->valor = aux;
                actual = decendiente;
            }
        }
        else {
            padre = actual;
            if (dato > actual->valor)
                actual = actual->der;
            else if (dato < actual->valor)
                actual = actual->izq;
        }
    }
}

int profundidad(nodo *raiz) {
    nodo *izqui = raiz;
    nodo *dere = raiz;
    int d = 1;
    int i = 1;

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

int main() {
    nodo *raiz = NULL;
    
    bool band = 1;
    while (band) {
        cout << "INGRESA UN DATO ";
        int dato;
        cin >> dato;
        if (dato > -1)
            insertar(raiz, dato);
        else
            band = 0;
    }

    imprimirABB(raiz);
    cout << "\n";

    int borrar;
    cout << "Borrar dato: ";
    cin >> borrar;
    eliminar(raiz, borrar);

    imprimirABB(raiz);
    cout << "\n";

    cout << profundidad(raiz);

    return 0;
}
