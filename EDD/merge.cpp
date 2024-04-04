#include <iostream>

using namespace std;

void copiarElementos(int base[], int copia[]) {
	int t = 5;
	for (int i = 0; i < 6; i++)
		copia[i] = base[i];
}

mezcla(int arr[], int izq, int medio, int der) {
	int aux[5];
	int x, y, z;
	z = izq;
	x = z;
	y = medio + 1;

	while (x <= medio && y <= der) {
		if (arr[x] <= arr[y])
			aux[z+1] = arr[x+1];
		else
			aux[z+1] = arr[y+1];
	}

	while (x <= medio)
		aux[z+1] = arr[x+1];

	while (y <= der)
		aux[z+1] = arr[y+1];

	copiarElementos(aux, arr);
}

void mergeSort(int arr[], int primero, int ultimo) {
	if (primero < ultimo) {
		int central = (primero + ultimo) / 2;
		mergeSort(arr, primero, central);
		mergeSort(arr, central+1, ultimo);
		mezcla(arr, primero, central, ultimo);
	}
}

int main(){
	int a[] = {57, 8, 5, 25, 34, 28};

	mergeSort(a, 0, 5);

	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";

	return 0;
}