#include <iostream>

using namespace std;

void ordenar(int arr[], int n){
	int i = 1;

	while(i < n){
		int band = 1;
		int aux = arr[i];
		int j = i - 1;
	
		while(band && j > -1){
			if(arr[j] > aux){
				arr[j+1] = arr[j];
				j--;
			}
	
			else
				band = 0;
		}

		arr[j+1] = aux;
		i++;

	}

}

void leerArr(int arr[], int n){
	for(int i = 0; i < n; i++)
		cin >> arr[i];
}

void escribirArr(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main(){
	int n;
	cout << "Ingresa el tamano del arreglo ";
	cin >> n;

	int arreglo[n];

	leerArr(arreglo,n);
	cout << "Arreglo: ";
	escribirArr(arreglo,n);
	cout << endl;

	ordenar(arreglo,n);
	cout << "Arreglo ordenado: ";
	escribirArr(arreglo,n);
	cout << endl;
	
	return 0;
}