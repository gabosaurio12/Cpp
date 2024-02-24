#include <iostream>

using namespace std;

void leerArr(int arr[], int tamano){
	for(int i = 0; i < tamano; i++)
		cin >> arr[i];
}

int buscarX(int arr[], int tamano, int x){
	for(int i = 0; i < tamano; i++){
		if(arr[i] == x)
			return 1;
	}
	return 0;
}

int main(){
	int arreglo[100], x, tamano;
	cout << "X ";
	cin >> x;
	cout << "Tamano ";
	cin >> tamano;
	leerArr(arreglo,tamano);
	cout << "Valor de Retorno \n";
	cout << buscarX(arreglo,tamano,x) << "\n";

	return 0;
}
