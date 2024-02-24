#include <iostream>

using namespace std;

void ArrEntero(int a[], int n){
    int i = 1;
    for (int j = 0; j<n; j++){
        a[j] = i;
        i++;
    }

}

void ArrCuadrado(int a[], long long ac[], int n){
    for (int i = 0; i < n; i++){
        ac[i] = a[i] * a[i];
    }

}

void EscribirArr(int a[], int n){
	cout << "Arr ";
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
		
	}
}

void EscribirArrLargo(long long a[], int n){
	cout << "Arreglo al cuadrado ";
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
		
	}
}	

int main(){
    int a[1000], n;
    long long ac[1000];

    cout << "Introduce hasta que numero quieres calcular el cuadrado \n";
    cin >> n;
    ArrEntero(a,n);
    EscribirArr(a,n);
    cout << endl << endl;

    ArrCuadrado(a,ac,n);

    EscribirArrLargo(ac,n);
    cout << endl;

    return 0;
}