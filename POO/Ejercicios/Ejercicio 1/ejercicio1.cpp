#include <iostream>
#include <string>

using namespace std;

class juguete {
	string nombre;
	string marca;
	float precio;

public:
	void alta() {
		string nombreAux, marcaAux;
		float precioAux;

		cout << "Nombre ";
		cin >> nombreAux;

		cout << "Marca ";
		cin >> marcaAux;

		cout << "Precio ";
		cin >> precioAux;

		nombre = nombreAux;
		marca = marcaAux;
		precio = precioAux;
	}

	void imprimir() {
		cout << "Nombre " << nombre << "\n";
		cout << "Marca " << marca << "\n";
		cout << "Precio " << precio << "\n";
	}
};

int main() {
	juguete j1;
	j1.alta();
	j1.imprimir();
	
	return 0;
}