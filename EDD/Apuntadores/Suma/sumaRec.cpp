#include <iostream>

using namespace std;

//Solución de Liz
int recSuma(int n, int *apu){
	if (n > -1)
		return *apu + recSuma(n-1,apu+1);
	else
		return 0;
}

void leArr (int a[], int n){
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

//Solución de la clase
int sumaArreglo(int *p, int n){
	if (n == 0)
		return 0;
	else
		return *p + sumaArreglo(p++,n-1);
}

int main(){
	int n;
	int *apu;
	cout << "Ingresa n ";	cin >> n;
	int arreglo[n];
	
	
	apu = arreglo;
	leArr(arreglo,n);
	cout << "Tarea " << recSuma(n-1,apu) << endl;
	cout << "Revision " << sumaArreglo(apu,n-1) << endl;

	return 0;
}