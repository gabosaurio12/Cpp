#include <iostream>

using namespace std;

void merge (int arr[], int inicio, int medio, int fin) {
    // Crear los 2 sub arreglos
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[inicio + 1];
    for (int j = 0; j < n2; j++)
        M[j] = arr[medio + 1 + j];
    // Se mantienen los índices de los 3 arreglos
    int i = 0;
    int j = 0;
    int k = inicio;
    // Copiamos los elementos comparando cuál va primero
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    // Cuando 1 se termine, copiamos lo que queda del otro
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort (int arr[], int inicio, int fin) {
    if (inicio < fin) {
        // m es el índice en donde se dividirá el arreglo
        int mitad = inicio + (fin - inicio) / 2;

        mergeSort(arr, inicio, mitad);
        mergeSort(arr, mitad + 1, fin);

        // "Mezclar" (merge) los subarreglos ordenados
        merge(arr, inicio, mitad, fin);
    }
}

void imprimeArr (int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main () {
    int arr[] = {6, 5, 12, 10, 9, 1};
    // sizeof regresa el tamaño en bytes
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    cout << "Arreglo ordenado: \n";
    imprimeArr(arr, size);
    getchar();

    return 0;
}
