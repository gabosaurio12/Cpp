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
    }while (i <= k);

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
    int a[] = {2, 7, 4, 3, 5, 1};
	
    imprimirArr(a, 6);

    quickSort(a, 0, 5);

    imprimirArr(a, 6);

    return 0;
}
