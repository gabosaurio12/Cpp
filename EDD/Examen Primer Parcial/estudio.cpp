#include <iostream>

using namespace std;

struct nodo {
    int valor;
    nodo *enlace;
};

int nodosLista(nodo *cab, int contador) {
    if (cab == NULL)
        return contador;
    else{
        contador += 1;
        nodosLista(cab->enlace, contador);
    }
}

void insertar(nodo *&cab, int dato) {
    if (cab == NULL) {
        nodo *ap = new nodo;
        ap->valor = dato;
        ap->enlace = NULL;
        cab = ap;
    }
    else if (cab->enlace == NULL){
            nodo *ap = new nodo;
            ap->valor = dato;
            ap->enlace = NULL;
            cab->enlace = ap;
    }
    
    else {
        insertar(cab->enlace, dato);
    }
}

void eliminar(nodo *&cab, int valElim) {
    nodo *actual = cab;
    nodo *anterior = NULL;

    if (cab->valor == valElim) {
        cab = cab->enlace;
        delete actual;
    }

    else {
        int band = 1;
        while (band && actual != NULL) {
            if (actual->valor == valElim) {
                anterior->enlace = actual->enlace;
                band = 0;

                delete actual;
            }
            else {
                anterior = actual;
                actual = actual->enlace;
            }
        }
    }

}

void imprimir(nodo *cab) {
    while (cab != NULL) {
        cout << cab->valor << " ";
        cab = cab->enlace;
    }
    cout << "\n";
}

int palindromo(string cad, int i, int f) {
    if (i != f) {
        if (cad[i] == cad[f]) {
            palindromo(cad, i+1, f-1);
        }
        else
            return 0;
    }
    return 1;
}

int main(){
    nodo *cab = NULL;

    for (int i = 0; i < 5; i++) {
        int dato;
        cin >> dato;
        insertar(cab, dato);
    }

    imprimir(cab);
 
    eliminar(cab, 4);
    eliminar(cab, 3);
    eliminar(cab, 8);

    imprimir(cab);
 

    return 0;
}
