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

void insertarFin(nodo *ant, nodo *nuevo){
    ant -> sig = nuevo;
    nuevo -> sig = NULL;
}

void insertar(nodo *ant, nodo *nuevo, nodo *siguiente){
    /*nodo *aux;
    aux = siguiente*/
    ant -> sig = nuevo;
    nuevo -> sig = siguiente;
}

void escribirLista(nodo *siguiente){
    while (siguiente != NULL){
        cout << " -> " << siguiente -> valor;
        siguiente = siguiente -> sig;
    }
    cout << "\n";
}

int main(){
    nodo *cab = NULL;

    nodo *p1 = NULL;
    p1 = new nodo;
    nuevoNodo(p1);

    cab = p1;

    nodo *p2 = NULL;
    p2 = new nodo;
    nuevoNodo(p2);
    insertarFin(p1,p2);

    escribirLista(cab);

    nodo *p3 = NULL;
    p3 = new nodo;
    nuevoNodo(p3);
    insertar(p1,p3,p2);

    escribirLista(cab);
    
    delete cab;
    delete p1;
    delete p2;
    delete p3;

    return 0;
}
