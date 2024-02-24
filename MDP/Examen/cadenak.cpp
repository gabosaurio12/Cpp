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
    int lcad = longitud(cad);
    if (lcad == 0){
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

int cark(string cad, int k){
	int np = nPalabras(cad);
	if (np < k){
		return 0;
	}

	int car, pal, i;
	car = 0;
	pal = 1;
	i = 1;

	if (k == 1){
		i = 0;
		while(cad[i] != ' ' || cad[i] != '\0'){
			car++;
			i++;
		}
	}
	while (pal < k){
		if (cad[i] = ' '){
			pal++;
		}
		i++;
	}

	while(cad[i + 1] != ' ' && cad[i + 1] != '\0'){
		car++;
		i++;
	}
	return car;
}

int main(){
	int k, ck;
	string micadena;
	k = 1;
	micadena = "Te Amo Liz!";
	ck = cark(micadena,k);
	cout << ck << endl;
	return 0;
}