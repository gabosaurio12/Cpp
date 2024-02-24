#include <iostream>

using namespace std;

int orden(int arr[], int n){
	int band = 1;
	int i = 0;
	while(band && i < n-1){
		if(arr[i] > arr[i+1])
			band = 0;
		i++;
	}
	return band;
}

void leerArr(int arr[],int n){
	for(int i = 0; i < n; i++)
		cin >> arr[i];
}

int main(){
	int n;
	cout << "Tamano del arreglo ";
	cin >> n;
	if(n == 1)
		return 1;
	int arr[n];
	
	leerArr(arr,n);
	cout << "Valor de retorno \n" << orden(arr,n);

	return 0;
}
