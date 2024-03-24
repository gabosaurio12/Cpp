#include <iostream>

using namespace std;

struct nodo{
    int valor;
    nodo *sig;
};

void nuevoNodo(nodo *n){
    cout << "Ingresa el valor del nodo \n";
    cin >> n -> valor;
    n -> sig = NULL;
}

void escribirLista(nodo *siguiente){
    while (siguiente != NULL){
        cout << " -> " << siguiente -> valor;
        siguiente = siguiente -> sig;
    }
    cout << "\n";
}

void insertarFin(nodo *ant, nodo *nuevo){
    ant -> sig = nuevo;
    nuevo -> sig = NULL;
}

void eliminar(nodo *ant, nodo *borrar, nodo *siguiente){
    ant -> sig = siguiente;
    delete borrar;
}

int main(){
    nodo *cab = NULL;

    nodo *p1 = NULL;
    p1 = new nodo;
    nuevoNodo(p1);

    cab = p1;

    nodo *p2;
    p2 = new nodo;
    nuevoNodo(p2);
    insertarFin(p1,p2);

    nodo *p3;
    p3 = new nodo;
    nuevoNodo(p3);
    insertarFin(p2,p3);

    escribirLista(cab);

    eliminar(p1,p2,p3);

    escribirLista(cab);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
