#include <iostream>

using namespace std;

void LeerArr(int a[], int n){
        for (int i = 0; i < n; i++){
                cout << "Introduce un dato \n";
                cin >> a[i];
        }
}

int nPositivos(int a[],int n){
	int positivos;
	positivos = 0;
	for (int i = 0; i < n; i++){
		if (a[i] >= 0){
			positivos = positivos + 1;
		}
	}
	return positivos;
}

int main(){
	int a[100], n, numpos;
	cout << "Introduce la longitud del arreglo \n";
	cin >> n;
	LeerArr(a,n);
	numpos = nPositivos(a,n);
	cout << "El arreglo tiene " << numpos << " numeros positivos \n";

	return 0;
}
