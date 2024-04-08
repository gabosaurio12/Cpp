#include <iostream>

using namespace std;

void intercambiar (int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void bubble(int a[], int n) {
    int band = 1;
    for (int p = 0; p < n-1; p++) {
        band = 0;
        for (int i = 0; i < n - p - 1; i++) {
            if (a[i] > a[i+1]) {
                intercambiar(a[i], a[i+1]);
                band = 1;
            }
        }
    }
}

void imprimirArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int n;
    cout << "Cuantos datos vas a ingresar? ";
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    imprimirArr(a, n);

    bubble(a, n);

    imprimirArr(a, n);

    return 0;
}
