#include <iostream>

using namespace std;

float imc(float peso, float estatura){
	float indice = peso / (estatura * estatura); 
	return indice;
}

void saludable(int indice, int edad){
	if (edad < 45){
		if (indice < 22){
			cout << "Bajo \n";
		}
		else{
			cout << "Medio \n";
		}
	}
	else{
		if (indice < 22){
			cout << "Medio \n";
		}
		else{
			cout << "Alto \n";
		}
	}
}
int main(){
	float peso, estatura;
	int edad;

	cout << "Ingresa tu peso \n";
	cin >> peso;
	cout << "Ingresa tu estatura \n";
	cin >> estatura;
	cout << "Ingresa tu edad \n";
	cin >> edad;

	float indice = imc(peso,estatura);
	cout << "Tu indice de masa corporal es " << indice << endl;

	cout << "Estas en un rango "; 
	saludable(indice, edad);
	

	return 0;
}
