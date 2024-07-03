#include <iostream>
using namespace std;
int main (){
	
	int orden, efectivo, cambio;
	
	cout << "Menu \n";
	cout << "Que desea ordenar? \n";
	cout << "Menu 1 $50 \n";
	cout << "Menu 2 $75 \n";
	cout << "Menu 3 $100 \n";
	cin >> orden;

//Menu 1
	
	if (orden == 1){
		cout << "Elegiste el menu 1 \n";
		cout << "Con cuanto pagas? \n";
		cin >> efectivo;
		cambio = efectivo - 50;
				
		if (cambio != 0) {
			cout << "Su cambio es de " << cambio << endl;
		}

		else {
			cout << "Disfruta";
		}	
	}

//Menu 2

	if (orden == 2){
		cout << "Elegiste el menu 2 \n";
		cout << "Con cuanto pagas? \n";
		cin >> efectivo;
		cambio = efectivo - 75;
				
		if (cambio != 0) {
			cout << "Su cambio es de " << cambio << endl;
		}

		else {
			cout << "Disfruta";
		}	
	}

//Menu 3
	
	if (orden == 3){
		cout << "Elegiste el menu 1 \n";
		cout << "Con cuanto pagas? \n";
		cin >> efectivo;
		cambio = efectivo - 100;
				
		if (cambio != 0) {
			cout << "Su cambio es de " << cambio << endl;
		}

		else {
			cout << "Disfruta";
		}	
	}	
	
	
	return 0;
	
}
