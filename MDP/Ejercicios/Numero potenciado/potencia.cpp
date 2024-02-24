#include <iostream>
using namespace std;
int main (){
	int b, e, i, pot;

	cout << "Programa que potencia numeros \n";
	cout << "Ingresa el numero \n";
	cin >> b;
	cout << "Ingresa el exponente \n";
	cin >> e;

	pot = 1;
	i = 0;

	if (e > 0){
		do{
			pot = pot * b;
			i ++;
		} while (i < e);
	}
	cout << pot;

	return 0;
}