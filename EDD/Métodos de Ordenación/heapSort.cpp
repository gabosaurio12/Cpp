#include <iostream>

using namespace std;

void intercambiar(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
}

void heapify(int a[], int tamanoHeap, int indicePadre) {
	int mayor = indicePadre;
	int iHijoIzq = 2 * indicePadre + 1;
	int iHijoDer = 2 * indicePadre + 2;

	if (iHijoIzq < tamanoHeap && a[iHijoIzq] > a[mayor])
		mayor = iHijoIzq;
	if (iHijoDer < tamanoHeap && a[iHijoDer] > a[mayor])
		mayor = iHijoDer;
	if (mayor != indicePadre) {
		intercambiar(a[indicePadre], a[mayor]);
		heapify(a, tamanoHeap, mayor);
	}
}

void heapSort(int a[], int tamanoArreglo) {
	for (int indicePadre = tamanoArreglo / 2 - 1; indicePadre >= 0; indicePadre--) {
		heapify(a, tamanoArreglo, indicePadre);
	}
	for (int iUltimoHeap = tamanoArreglo - 1; iUltimoHeap >= 1; iUltimoHeap--) {
		intercambiar(a[0], a[iUltimoHeap]);
		heapify(a, iUltimoHeap, 0);
	}
}

void imprimirArr(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

int main() {
	int a[] = {5, 6, 8, 4, 2, 4, 7, 2, 3, 1};
	imprimirArr(a, 10);

	heapSort(a, 10);

	imprimirArr(a, 10);

	return 0;
}