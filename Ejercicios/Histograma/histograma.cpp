#include <iostream>

using namespace std;

int main(){
	
	bool band;
	int positivos, negativos, n;
	
	positivos = 0;
	negativos = 0;
	band = true;
	while (band){
		cout << "Ingresa un numero \n";
		cin >> n;
		if (n > 0){
			positivos++;
		}
		if (n < 0){
			negativos++;
		}
		if (n == 0){
			band = false;
		}
	}

	cout << "Positivos: " << positivos << endl;
	cout << "Negativos: " << negativos << endl;

	return 0;
}
