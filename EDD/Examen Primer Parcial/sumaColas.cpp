#include <iostream>

using namespace std;

void agregar(int a[], int *&cab, int *&cola, int dato) {
	if (cab == NULL)
		*cab = dato;
	else {
		*cola = dato;
		cola++;
	}
}

int suma(int *frente, int *final) {
	int *aux;
	int acom = 0;
	for (aux = frente; aux != final; aux++)
		acom+= *aux;

	return acom;
}



int main() {
	int a[100], *cab, *cola, band;
	cab = a;
	cola = a;
	band = 1;
	while (band) {
		int dato;
		cin >> dato;
		if (dato > -1){
			if (cab == NULL)
				*cab = dato;
			else {
				*cola = dato;
			}
			cola++;
		}
		else
			band = 0;
	}

	for (int *aux = cab; aux != cola; aux++)
		cout << *aux << " ";
	cout << "\n";

	cout << suma(cab, cola) << "\n";

	return 0;
}