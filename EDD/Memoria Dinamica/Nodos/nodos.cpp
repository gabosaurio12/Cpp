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

int main(){
	nodo *cab = NULL;

	nodo *p1 = NULL;
	p1 = new nodo;
	nuevoNodo(p1);

	cab = p1;

	escribirLista(cab);

	return 0;
}