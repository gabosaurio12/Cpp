#include <iostream>
#include <string>

using namespace std;

int longitud(string cad){
    int cont, i;
    cont = 0;
    i = 0;
    while (cad[i] != '\0'){
        cont++;
        i ++;
    }
    return cont;
}

int nPalabras(string cad){
    int cont, i, lcad;
    lcad = longitud(cad);
    if (lcad == 0){
        return 0;
    }
    cont = 1;
    for (int i = 0; i < lcad; i++){
        if (cad[i] == ' '){
            cont++;
        }
    }

    return cont;
}

int main(){
    int palabras;
    string cadena;
    cadena = "Hola mundo";
    cout << longitud(cadena) << endl;
    palabras = nPalabras(cadena);
    cout << "Palabras " << palabras << endl;

    return 0;
}