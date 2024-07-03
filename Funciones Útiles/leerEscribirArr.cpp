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
}	

int main(){
    int a[200], n;
    cout << "Introduce la longitud del arreglo \n";
    cin >> l;
    leerArr(a,n);
    escribirArr(a,n);
    return 0;
}
