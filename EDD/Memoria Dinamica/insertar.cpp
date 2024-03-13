#include <iostream>

using namespace std;

struct nodo{
    int valor;
    nodo *sig;
};

void escribirLista(nodo *siguiente){
    while (siguiente != NULL){
        cout << " -> " << siguiente -> valor;
        siguiente = siguiente -> sig;
    }
    cout << "\n";
}

int main(){
    nodo *head = NULL;
    nodo *po = NULL;

    po = new nodo;
    po -> valor = 2;
    po -> sig = NULL;

    head = po;

    po = new nodo;
    po -> valor = 4;
    po -> sig = NULL;
    head -> sig = po;

    po = new nodo;
    po -> valor = 6;
    po -> sig = NULL;
    head -> sig = po;

    escribirLista(head);
    
    delete head;
    delete po;

    return 0;
}
