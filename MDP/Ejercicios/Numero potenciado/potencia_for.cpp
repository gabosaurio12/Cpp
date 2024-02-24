#include <iostream>
using namespace std;
int main (){
	int b, e, pot;

	cout << "Programa que potencia numeros \n";
	cout << "Ingresa el numero \n";
	cin >> b;
	cout << "Ingresa el exponente \n";
	cin >> e;

	pot = 1;
	
	for (int i = 1; i >= e; i++){
		pot = pot * b;
	}
	cout << pot;

	return 0;
}