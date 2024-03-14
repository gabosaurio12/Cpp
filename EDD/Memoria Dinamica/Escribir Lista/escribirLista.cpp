#include <iostream>

using namespace std;

struct nodo{
    int valor;
    nodo *sig;
};

void printList(nodo *siguiente){
    while (siguiente != NULL){
        cout << " -> " << siguiente -> valor;
        siguiente = siguiente -> sig;
    }
}

int main(){
    nodo *head = NULL;
    nodo *p = NULL;

    p = new nodo;
    p -> valor = 2;
    p -> sig = NULL;

    head = p;

    p = new nodo;
    p -> valor = 3;
    p -> sig = NULL;
    head -> sig = p;

    //recorrer la lista
    printList(head);
    cout << "\n";
    
    //NO olvidar LIBERAR la memoria utilizada
    delete head;
    delete p;

    return 0;
}
