#include <iostream>

using namespace std;

void swap(int arr[], int pos1, int pos2) {
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

void heapify(int a[], int tamañoHeap, int indicePadre) {
	int grande = indicePadre;
	int inidiceHIzq = 2 * indicePadre + 1;
	int inidiceHDer = 2 + indicePadre + 2;

	if (inidiceHIzq < tamañoHeap && a[inidiceHIzq] > a[grande])
		grande = inidiceHIzq;
	if (inidiceHDer < tamañoHeap && a[inidiceHDer] > a[grande])
		grande = inidiceHDer;
	if (grande != indicePadre) {
		swap(a[indicePadre], tamañoHeap, a[grande])
		heapify(a, tamañoHeap, grande);
	}
}

void heapSort(int a[], int tamaño) {
	for (int nodoSinIndice = tamaño / 2 - 1; nodoSinIndice >= 0; nodoSinIndice--)
		heapify(a, tamaño, nodoSinIndice);

	for(int ultimoIndiceHeap = tamaño - 1; ultimoIndiceHeap >= 1; ultimoIndiceHeap--){
		swap(a[0], a[ultimoIndiceHeap]);
		heapify(a, ultimoIndiceHeap, 0);
	}
}

int main() {
	int arr[] = {77, 15, 91, 21, 6, 46};
	int tamañoArr = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, tamañoArr);

	for (int i = 0; i < tamañoArr; i++) {
		cout << arr[i] << " ";
	}

	getchar();
	return 0;
}