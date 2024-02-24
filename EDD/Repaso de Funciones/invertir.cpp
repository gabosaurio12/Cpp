#include <iostream>

using namespace std;

void leerArr(int a[], int n){
	for(int i = 0; i < n; i++)
		cin >> a[i];
}

void escribirArr(int a[], int n){
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void invertir(int a[], int n){
	int i = 0;	int j = n - 1;
	while(i < j){
		int aux = a[i];
		a[i] = a[j];
		a[j] = aux;
		i++;	j--;
	}
}

int main(){
	int a[100], n;
	cin >> n;
	leerArr(a,n);
	escribirArr(a,n);
	invertir(a,n);
	escribirArr(a,n);

	return 0;
}