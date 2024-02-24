#include <iostream>
using namespace std;
int main () {
	int t, tabla;
	t = 10;

	cout << "Que tabla de multiplicar quieres ver? \n";
	cin >> tabla;
	cout << "Tabla del " << tabla << "\n";

	for (int i = 1; i <= t; i++){
		cout << tabla << " x " << i << " = " << tabla*i << "\n";

	}
	return 0;
}