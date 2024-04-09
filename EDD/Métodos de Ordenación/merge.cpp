#include <iostream>

using namespace std;

void mezcla(double a[], int izq, int med, int der) {
	double *aux;
	int x, y, z;
	aux = new double[der - izq + 1];
	x = z = izq;
	y = med + 1;

	while (x <= med && y <= der) {
		if (a[x] <= a[y])
			aux[z++] = a[x++];
		else
			aux[z++] = a[y++];
	}

	while (x <= med)
		aux[z++] = a[x++];

	while (y <= der)
		aux[z++] = a[y++];

	for (int i = izq; i <= der; i++)
		a[i] = aux[i];

	delete aux;
}

void mergeSort(double a[], int primero, int ultimo) {
	int central;

	if (primero < ultimo) {
		central = (primero + ultimo) / 2;
		mergeSort(a, primero, central);
		mergeSort(a, central + 1, ultimo);
		mezcla(a, primero, central, ultimo);
	}
}


int main() {
	double a[] = {57, 8, 5, 25, 34, 28};
	
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";

	mergeSort(a, 0, 5);

	cout << "\n";
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";

	return 0;
}