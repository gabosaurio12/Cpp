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

void escribirLista(nodo *siguiente){
    while (siguiente != NULL){
        cout << " -> " << siguiente -> valor;
        siguiente = siguiente -> sig;
    }
    cout << "\n";
}

void modificar(nodo *siguiente, int pos, int nValor){
	int band = 0;
    int cont = 0;
	while (siguiente != NULL && !band){
		if (cont == pos){
			siguiente -> valor = nValor;
			band = 1;
		}
		else{
            cont++;
			siguiente = siguiente -> sig;
		}
	}
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

    escribirLista(cab);

    int posModificar, nuevoValor;
    cout << "Ingresa la posicion del valor que quieres modificar ";
    cin >> posModificar;
    cout << "Ingresa el valor nuevo ";
    cin >> nuevoValor;

    modificar(cab,posModificar,nuevoValor);

    escribirLista(cab);

	return 0;
}