#include <iostream>
using namespace std;
int main () {
	//declaramos variables
	int r, i, m, a;
	
	//leemos variable
	cout << "Programa que indica si un ano es bisiesto \n";
	cout << "Quieres calcular un rango de anos 1= si, 2= no \n";
	cin >> r;
	
	if (r == 1) {
		cout << "Escribe el limite inferior aaaa \n";
		cin >> i;
		cout << "Escribe el limite superior aaaa \n";
		cin >> m;
		
		i= i-1;
		
		while (i < m){
			i = i + 1;
			cout << i << " ";
			
			if (i == 0){
				cout << "No es bisiesto \n";
			}
			
			else {
				if (i % 4 == 0) {
					cout << "Es bisiesto \n";
				}
				else {
					cout << "No es bisiesto \n";
				}
			}
		}
	}
	
	else {
		cout << "Que fecha quieres saber? aaaa \n";
		cin >> a;
		if (a % 4 == 0) {
			cout << "Es bisiesto \n";
		}
		else {
			cout << "No es bisiesto \n";
		}
	}
	
	return 0;
}
