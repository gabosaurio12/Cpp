#include <iostream>

using namespace std;

void LeerArr(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingresa un dato: \n";
        cin >> a[i];
    }
}

void Invertir(int a[], int n){
    for (int i = n-1; i >= 0; i--){
        cout << a[i] << " ";
    }

}

int main(){
    int n;
    cout << "Ingresa el tamano del array \n";
    cin >> n;

    int a[n];
    LeerArr(a,n);
    Invertir(a,n);


    return 0;
}