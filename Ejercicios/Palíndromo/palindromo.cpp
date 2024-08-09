#include <iostream>

using namespace std;

void invertir(int &n) {
	int n2 = 0;
	while (n > 0) {
		n2 = n2 * 10 + (n % 10);	
		n /= 10;
	}
	n = n2;
}

bool palindromo(int n) {
	int nAux = n;
	bool palin = 0;
	invertir(nAux);
	if (n == nAux)
		palin = 1;
	
	return palin;
}

int main() {
	int numero;
	cout << "Ingresa el numero ";
	cin >> numero;
	bool band = palindromo(numero);
	if (band)
		cout << "Es palindromo \n";
	else
		cout << "No es palindromo \n";

	return 0;
}
