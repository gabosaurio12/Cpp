#include <iostream>

using namespace std;

int obtienePosX(int arr[], int n, int x){
	int posicion = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x)
			return posicion;
		posicion++;
	}
	return -1;
}

void leerArr(int arr[], int n){
	for(int i = 0; i < n; i++)
		cin >> arr[i];
}

int main(){
	int n, x;
	cout << "Ingresa el tamano del arreglo ";
	cin >> n;
	cout << "Ingresa el valor a buscar ";
	cin >> x;
	int arr[n];
	leerArr(arr,n);

	cout << "La primera posicion es 0 \n" << "La posicion del numero buscado es " << obtienePosX(arr,n,x);

	return 0;
}