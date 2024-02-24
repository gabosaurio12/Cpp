#include <iostream>

using namespace std;

int esPrimo(int num){

	int i = 2;
	int band = 1;
	
	while (band && i<num){
		if (num%i == 0){
			band = 0;
		}
		i++;
	}

	return band;
}

int main(){
	int n, suma;

	cout << "Cuantos numeros quieres introducir? \n";
	cin >> n;

	for (int i = 1; i <= n; i++){
		int x;
		cout << "Introduce el numero: ";
		cin >> x;
		if (esPrimo(x)){
			suma = suma + x;
		}
	}

	cout << "La suma de primos es: " << suma << endl;

	return 0;
}