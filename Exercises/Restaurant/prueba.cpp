#include <iostream>
#include "restaurant.cpp"

using namespace std;

int main(){
	cout<< "Pruebas para restaurant \n";

	cout<< "Probando resultado \n";
	int resultado = cajero("efectivo", 200);
	cout<< resultado << endl;

	return 0;
}