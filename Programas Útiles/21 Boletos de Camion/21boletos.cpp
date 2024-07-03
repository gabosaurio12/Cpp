#include <iostream>

using namespace std;

void leerArr(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << "Introduce el numero \n";
		cin >> a[i];
	}
}

int suma(int boleto[], int n){
    int res;
    res = 0;
    for (int i = 0; i < n; i++){
        res = res + boleto[i];
    }

    return res;
}

bool boletoBueno(int boleto[], int res){
    bool band = true;
    if (res != 21){
        band = false;
    }

    return band;
}

int main(){
    int ticket[10], n, resultado;
    bool bueno;
    cout << "Ingresa la cantidad de digitos que tiene tu boleto \n";
    cin >> n;
    cout << "Ingresa los digitos de tu boleto \n";
    leerArr(ticket,n);

    resultado = suma(ticket,n);
    bueno = boletoBueno(ticket,resultado);
    if (bueno){
        cout << "Tu boleto suma 21! \n";
    }
    else{
        cout << "Tu boleto no suma 21 :/ \n";
    }
    return 0;
}
