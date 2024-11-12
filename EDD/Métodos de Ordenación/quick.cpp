#include <iostream>

using namespace std;

void intercambiar(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void quickSort(int a[], int first, int last) {
    int p, i, k;
    int central = (first + last) / 2;

    p = a[central];
    i = first;
    k = last;

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

    if (first < k)
        quickSort(a, first, k);
    
    if (i < last)
        quickSort(a, i, last);
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
