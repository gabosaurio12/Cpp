#include <iostream>

using namespace std;

void cambiar(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
}

void intercambio(int a[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = n - 1; j > i+1; j--) {
			if (a[j] < a[j-1])
				cambiar(a[j], a[j-1]);
		}
	}
}

void bubble(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int pm = i;
		for (int j = i+1; j < n; j++) {
			if (a[j] < a[pm])
				pm = j;
		}
		cambiar(a[i], a[pm]);
	}
}

void insercion(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int aux = a[i];
		bool band = false;
		int j = i - 1;
		while (!band && j > -1) {
			if (a[j] > aux) {
				a[j+1] = a[j];
				j--;
			}
			else
				band = true;
		}
		a[j+1] = aux;
	}
}

void quickSort(int a[], int primero, int ultimo) {
	int central = (primero + ultimo) / 2;
	int pivote = a[central];
	int i = primero;
	int j = ultimo;

	do {
		while (a[i] < pivote)
			i++;
		while (a[j] > pivote)
			j--;

		if (i <= j) {
			cambiar(a[i], a[j]);
			i++;
			j--;
		}
	} while (i <= j);

	if (primero < j)
		quickSort(a, primero, j);
	if (i < ultimo)
		quickSort(a, i, ultimo);
}

void imprimir(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[100];

	cout << "Ingresa los datos del arreglo \n";
	cout << "Ingresa un dato: ";
	int dato;
	cin >> dato;

	int i = 0;
	while (dato > -1) {
		a[i] = dato;
		i++;
		cout << "Ingresa un dato: ";
		cin >> dato;
	}

	cout << "Arreglo \n";
	imprimir(a, i);

	cout << "Método de Ordenamiento: \n";
	cout << "1. Quick \n";
	cout << "2. Bubble \n";
	cout << "3. Intercambio \n";
	cout << "4. Inserción \n";

	int opc;
	cin >> opc;
	switch (opc) {
		case 1:
			quickSort(a,0,i-1);
			imprimir(a, i);
			break;
		case 2:
			bubble(a, i);
			imprimir(a, i);
			break;
		case 3:
			intercambio(a, i);
			imprimir(a, i);
			break;
		case 4:
			insercion(a, i);
			imprimir(a, i);
			break;
		default:
			cout << "Salir \n";
			break;
	}
	
	return 0;
}