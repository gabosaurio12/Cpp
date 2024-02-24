#include <iostream>
#include <string>

using namespace std;

string primeraPalabra(string cad){
    int i;
    i = 0;
    string palabra;
    palabra = "";
    if (cad[i] == '\0'){
        return palabra;
    }

    while (cad[i] != '\0' && cad[i] != ' '){
        palabra = palabra + cad[i];
        i++;
    }
    return palabra;
}

int main(){
    string cadena, primPal;
    cadena = "Buenos dias";
    primPal = primeraPalabra(cadena);
    cout << primPal << endl;

    return 0;
}