#include <iostream>

using namespace std;

void LeerArr(int a){
    for (int i = 0; i < 5; i++){
        cout << "Ingresa un dato: \n";
        cin >> a[i];
    }
}

void invertir(int a, int n){
    int i = 0;
    int j = n - 1;
    while (i < j){
        int aux = a[i];
        a[i] = a[j];
        a[j] = aux;
        i++;
        j--;
    }
}

int main(){
    int n;
     
    cout << "Leer arreglo \n";
    int a[5];
    LeerArr(a);

    cout << "Invertir \n";
    invertir(a, n);

    return 0;
}