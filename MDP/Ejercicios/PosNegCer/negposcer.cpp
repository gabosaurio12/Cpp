#include <iostream>

using namespace std;

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

void n0pV(int v[], int n){
	int i, positivos, negativos, ceros;
	i = 0;
	positivos = 0;	
	negativos = 0;
	
	ceros = 0;

	while (i < n){
		if (v[i] > 0){
			positivos++;
		}
		if (v[i] < 0){
			negativos++;
		}
		if (v[i] == 0){
			ceros++;
		}
		i++;
	}
	cout << "\nPositivos " << positivos << endl;
	cout << "Negativos " << negativos << endl;
	cout << "Ceros " << ceros << endl;
}

int main(){
	int n, a[100];
	cout << "Longitud del arreglo \n";
	cin >> n;
	LeerArr(a,n);
	EscribirArr(a,n);
	n0pV(a,n);

	return 0;
}
