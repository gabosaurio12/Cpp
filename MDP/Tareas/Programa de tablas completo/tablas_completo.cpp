#include <iostream>
using namespace std;
int main (){
	int decision, t = 10, tabla;

	cout << "Programa que muestra tablas de multiplicar \n";
	cout << "Quieres ver solo una tabla (1) o del 2 al 10 (2) \n";
	cin >> decision;

	switch (decision) {
		case 1:
			cout << "Que tabla quieres saber? \n";
			cin >> tabla;

			cout << "Tabla del " << tabla << "\n";

			for (int i = 1; i <= t; i++) {
				cout << tabla << " x " << i << " = " << tabla*i << "\n";
			}

			break;

		 case 2:
		 	cout << "Mostrando tablas del 2 al 10 \n";

		 	for (int i = 2; i <= t; i++){
				cout << "\n";
				cout << "Tabla del " << i << "\n";
				
				for (int c = 1; c <= t; c++){

					cout << i << " x " << c << " = " << i*c << "\n";
				}

			}

			break;	
	
	}

	return 0;

}