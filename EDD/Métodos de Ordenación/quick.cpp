#include <iostream>

using namespace std;

void intercambiar(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void quickSort(int a[], int primero, int ultimo) {
    int p, i, k;
    int central = (primero + ultimo) / 2;

    p = a[central];
    i = primero;
    k = ultimo;

    do {
        while (a[i] < p)
            i++;
        while (a[k] > p)
            k--;

        if (i <= k) {
            intercambiar(a[i], a[k]);
            i++;    
            k--;
        }
    } while (i <= k);

    if (primero < k)
        quickSort(a, primero, k);
    
    if (i < ultimo)
        quickSort(a, i, ultimo);
}

void imprimirArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int a[] = {10, 7, 8, 4, 3, 1, 2};
	
    imprimirArr(a, 7);

    quickSort(a, 0, 6);

    imprimirArr(a, 7);

    return 0;
}
