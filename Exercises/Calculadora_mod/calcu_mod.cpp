#include <iostream>

using namespace std;

float numALeer(float &nl){
	cout << "Cuantos numeros vas a ingresar? \n";
	cin >> nl;
	return nl;
}

float leerNumero(float &n){
	cout << "Introduce un numero: ";
	cin >> n;
	return n;
}

void resultado(float resultado){
	cout << "El resultado es: " << resultado << endl;
}

void suma(){
	float nl, n, suma;
	cout << "Suma \n";
	numALeer(nl);

	suma = 0;
	for (int i = 1; i <= nl; i++){
		leerNumero(n);
		suma = suma + n;
	}

	resultado(suma);
}

void resta(){
	float nl, n, resta;
	cout << "Resta \n";
	numALeer(nl);

	cout << "Introduce un numero: ";
	cin >> resta;
	for (int i = 1; i < nl; i++){
		leerNumero(n);
		resta = resta - n;
	}

	resultado(resta);

}

void multiplicacion(){
	float nl, n, multi;

	cout << "multiplicacion \n";
	numALeer(nl);

	multi = 1;

	for (int i = 1; i <= nl; i++){
		leerNumero(n);
		multi = multi * n;		
	}

	resultado(multi);
}

void division(){
	float nl, n, div;

	cout << "Division \n";
	numALeer(nl);

	cout << "Introduce un numero: ";
	cin >> div;

	for (int i = 1; i < nl; i++){
		leerNumero(n);
		div = div / n;
	}

	resultado(div);
}

void menu(){
	float n1, n2;
	char oper;
	
	cout << "Calculadora \n";
	cout << "a. Suma \n";
	cout << "b. Resta \n";
	cout << "c. Multiplicacion \n";
	cout << "d. Division \n";
	cout << "Que operacion (n) quieres hacer? \n";
	cin >> oper;

	switch (oper){
		case 'a':
			suma();
			break;
		case 'b':
			resta();
			break;
		case 'c':
			multiplicacion();
			break;
		case 'd':
			division();
			break;
	}
}

int repeticion(char repetir){
	int band = 1;

	cout << "Quieres hacer otra operacion? s/n \n";
	cin >> repetir;

	if (repetir == 'n'){
		band = 0;
	}

	return band;
}

int main (){
	char repetir;

	menu();

	while (repeticion(repetir)){
		menu();
	}

	cout << "Adios! \n";

	return 0;
}
