#include <iostream>

using namespace std;

void Insertark(int a[], int k, int x){
	a[k] = x;
}

void LeerArr(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << "Introduce un dato \n";
		cin >> a[i];
	}
}

void EscribirArr(int a[], int n){
	cout << "Arr ";
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
		
	}
}

int main(){
	int a[100], n, posicion, valor;
	cout << "Introduce la longitud del arreglo \n";
	cin >> n;
	LeerArr(a,n);
	EscribirArr(a,n);
	
	cout << "\nIntroduce el valor que quieres ingresar \n";
	cin >> valor;
	
	cout << "Introduce la posicion del valor que quieres insertar\n";
	cout << "La primera posicion es 0 \n";
	cin >> posicion;
	Insertark(a,posicion,valor);
	EscribirArr(a,n);
	cout << endl;

	return 0;
}
