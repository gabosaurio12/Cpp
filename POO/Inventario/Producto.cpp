#include <string>

using namespace std;

class Producto {
	
	private:
		string nombre;
		string marca;
		string categoria;
		float precio;
		int stock;

	public:
		Producto() {
			nombre = "";
			marca = "";
			categoria = "";
			precio = 0.0f;
			stock = 0;
		}

		Producto(string nombre, string marca, float precio, int stock) {
			this->nombre = nombre;
			this->marca = marca;

			cout << "A que categoria pertenece \n";
			cout << "1. Comida \n";
			cout << "2. Juguetes \n";
			cout << "3. Articulos del hogar \n";
			cout << "4. Productos de limpieza \n";
			cout << "5. Otros \n";
			char cat;
			cin >> cat;
			switch (cat) {
				case '1':
					this->categoria = "COMIDA";
					break;
				case '2':
					this->categoria = "JUGUETES";
					break;
				case '3':
					this->categoria = "HOGAR";
					break;
				case '4':
					this->categoria = "LIMPIEZA";
					break;
				default:
					this->categoria = "OTROS";
			}

			this->precio = precio;
			this->stock = stock;
		}

		// FUNCIONES
		void mostrarInfo() {
			cout << "Nombre " << nombre << "\n";
			cout << "Marca " << marca << "\n";
			cout << "Categoria " << categoria << "\n";
			cout << "Precio " << precio << "\n";
			cout << "Stock " << stock << "\n";
		}
};
