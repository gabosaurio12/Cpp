/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct nodo {
    int valor;
    nodo *siguiente;
};

void agregar(nodo *&frente, nodo *&final, int dato) {
    if (final == NULL) {
        nodo *ap = new nodo;
        ap->valor = dato;
        ap->siguiente = NULL;
        frente = ap;
        final = ap;
    }
    
    else {
        nodo *ap = new nodo;
        ap->valor = dato;
        ap->siguiente = NULL;
        final->siguiente = ap;
        final = ap;
    }
}

int sacar (nodo *&frente) {
    nodo *aux = frente;
    int saqueo = frente->valor;
    frente = frente->siguiente;
    delete aux;
    return saqueo;
}

void imprimir(nodo *frente) {
    if (frente != NULL) {
        cout << frente->valor << " ";
        imprimir(frente->siguiente);
    }
}

int main() {
    cout<<"Hello World \n";
    
    nodo *frente, *final;
    frente = NULL;
    final = NULL;
    
    int band = 1;
    while (band) {
        int dato;
        cin >> dato;
        if (dato > -1)
            agregar(frente, final, dato);
        else band = 0;
    }
    
    imprimir(frente);
    cout << "\n";
    
    cout << sacar(frente) << "\n";
    
    imprimir(frente);
    cout << "\n";

    return 0;
}
