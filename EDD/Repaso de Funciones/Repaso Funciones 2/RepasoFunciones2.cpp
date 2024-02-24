#include <iostream>

using namespace std;

int numMayor(int arr[], int n){
	int mayor = arr[0];
	for(int i = 1; i < n; i ++){
		if(arr[i] > mayor)
			mayor = arr[i];
	}
	return mayor;
}

void leerArr(int arr[], int n){
	for(int i = 0; i < n; i++)
		cin >> arr[i];
}

int main(){
	int arr[100],n;
	cout << "Ingresa el tamano del arreglo ";
	cin >> n;
	cout << "Ingresa el arreglo \n";
	leerArr(arr,n);
	cout << "Numero Mayor \n";
	cout << numMayor(arr, n) << "\n";
	return 0;
}
