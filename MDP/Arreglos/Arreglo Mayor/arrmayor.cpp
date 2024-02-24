#include <iostream>

using namespace std;

int main(){
    int mayor, a[10];

    for (int i = 0; i < 10; i++){
        cout << "Ingresa un dato \n";
        cin >> a[i];
    }

    mayor = a[0];

    for (int i = 1; i < 10; i++){
        if (a[i] > mayor){
            mayor = a[i];
        }
    }
    cout << "El mayor es: " << mayor << endl;

    return 0;
}