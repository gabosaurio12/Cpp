#include <iostream>

using namespace std;

void cajero (string pago, int precio){
	int efectivo, cambio;
	if (pago == "efectivo"){
		cout<< "Con cuanto pagaras? \n";
		cin>> efectivo;

		cambio = efectivo - precio;
		cout<< cambio;
	}
	if (pago == "tarjeta"){
		cout<< "Procesando pago \n";
		cout<< ". . . \n";
		cout<< "Pago aprobado \n";
	}
}

int main (){

	//prueba de cajero
	cajero("efectivo", 200);

	//prueba de 
	return 0;
}