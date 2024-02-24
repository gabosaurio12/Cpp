#include <iostream>

using namespace std;

void arrder(int a[], int n){
    for (int i = 0; i < n; i++){
        int aux = a[i + 1];
        a[i + 1] = a[i];
        a[i] = aux;
    }
    a[0] = a[n-1];
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
    int a[100];
    int n = 4;
    
    LeerArr(a,n);

    EscribirArr(a,n);

    arrder(a,n);

    EscribirArr(a,n);

    return 0;
}