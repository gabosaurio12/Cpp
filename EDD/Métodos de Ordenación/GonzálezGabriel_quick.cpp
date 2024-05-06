#include <iostream>

using namespace std;

void swap(int arr[], int pos1, int pos2) {
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int inicio, int fin, int pivote) {
    int i = inicio;
    int j = inicio;
    while (i <= fin) {
        if (arr[i] > pivote) {
            i++;
        }
        else {
            swap(arr, i, j);
            i++;
            j++;
        }
    }

    return j-1;
}

void quickSort(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = arr[fin];
        int pos = partition(arr, inicio, fin, pivote);
        quickSort(arr, inicio, pos-1);
        quickSort(arr, pos+1, fin);
    }
}

void leerArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void escribirArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
}

int main () {
    int n;
    cout << "N";
    cin >> n;

    int arr[n];
    leerArr(arr, n);
    escribirArr(arr, n);

    quickSort(arr, 0, n-1);

    return 0;
}
