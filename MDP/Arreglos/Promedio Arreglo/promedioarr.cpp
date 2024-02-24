#include <iostream>

using namespace std;

void LeerArr(float a[], float n){
	for (int i = 0; i < n;i++){
		cout << "Ingresa un dato \n";
		cin >> a[i];
	}
}

void Promedio(float a[], float n){
	float suma;
	float prom;
	suma = 0;
	for (int i = 0; i < n; i++){
		suma = suma + a[i];
	}
	prom = suma / n;
	cout << "El promedio es: " << prom << endl;
}

int main(){
	float a[100], n;
	cout << "Cuantos datos quieres promediar? \n";
	cin >> n;
	LeerArr(a,n);
	Promedio(a,n);

	return 0;
}

