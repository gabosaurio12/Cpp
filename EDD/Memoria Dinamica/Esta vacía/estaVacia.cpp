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

int estaVacia(nodo *lista){
	if (lista == NULL){
		return 1;
	}
	return 0;
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

    nodo *p3 = NULL;
    p3 = new nodo;
    nuevoNodo(p3);
    insertarFin(p2,p3);

    nodo *p4 = NULL;
    p4 = new nodo;
    nuevoNodo(p4);
    insertarFin(p3,p4);


    cout << "Lista 1 \n";
	if (estaVacia(cab) == 1)
		cout << "Esta vacia \n";
	else
		cout << "No esta vacia \n";


    nodo *cab2 = NULL;

	cout << "Lista 2 \n";
	if (estaVacia(cab2) == 1)
		cout << "Esta vacia \n";
	else
		cout << "No esta vacia \n";

	return 0;
}