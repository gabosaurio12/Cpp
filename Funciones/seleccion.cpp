#include <iostream>

using namespace std;

void leerArr(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << "Introduce un dato \n";
    	cin >> a[i];
    }
}

void escribirArr(int a[], int n){
    cout << "Arreglo ";
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";	
    }
    cout << "\n";
}

void bubble(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[j] < a[i]){
				int aux;
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}

int main(){
	int arr[100], n;
	cout << "Ingresa n \n";
	cin >> n;

	leerArr(arr,n);
	escribirArr(arr,n);

	bubble(arr,n);
	escribirArr(arr,n);

	return 0;
}