#include <iostream>

using namespace std;

float promedio(float suma, float n){
	float promedio;
	promedio = suma / n;
	
	return promedio;
}

float leerDatos(float n){
	float i = 0;
	float num;
	float suma = 0;
	while (i < n){
		cout << "Ingresa un numero \n";
		cin >> num;
		suma = suma + num;
		i++;
	}
	return suma;
}
int main(){
	float n1, n2, n3, NumDeDatos, suma;
	cout << "Cuantos datos quieres promediar? \n";
	cin >> NumDeDatos;

	suma = leerDatos(NumDeDatos);
	cout << "El promedio es " << promedio(suma, NumDeDatos) << endl;

	return 0;
}
