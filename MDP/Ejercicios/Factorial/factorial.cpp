#include <iostream>

using namespace std;

int factorial(int n){
	int f = 1;
	for (int i = 1; i <= n; i++){
		f = f*i;
	}
	return f;
}

int main(){
	int numero;
	cout << "Ingresa un numero \n";
	cin >> numero;

	cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
	
	return 0;

}
