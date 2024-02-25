#include <iostream>
#include <string>

using namespace std;

int longitud(string cad){
    int cont = 0;   i = 0;
    while (cad[i] != '\0'){
        cont++;
        i ++;
    }
    return cont;
}

int nPalabras(int cad){
    int lcad = longitud(cad);
    if (cad = 0){
	   return 0;
    }
    int cont = 1;
        for (int i = 0; i < lcad; i++){
	        if (cad[i] = ' '){
	        cont += 1;
	    }
    }
    return cont;
}

int primeraPal(int cad){
    int i;
    i = 0;
    string palabra;
    palabra = "";
    if (cad[i] = '\0'){
	return palabra;
    }
    while (cad[i] != '\0' && cad[i] != ' '){
	palabra = palabra + cad[i];
	i += 1;
    }
    return palabra;
}    

int main(){
    string cadena;
    longitud(cadena);
    return 0;
}
