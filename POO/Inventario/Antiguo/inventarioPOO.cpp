#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class Producto {
private:
	string nombre;
	string marca;
	string categoria;
	float precio;
	int stock;

public:
	Producto(string n, string m, string c, float p) {
		nombre = n;
		marca = m;
		categoria = c;
		precio = p;
	}

	string getNombre() const {
		return nombre;
	}

	string getMarca() const {
		return marca;
	}

	string getCategoria() const {
		return categoria;
	}

	float getPrecio() const {
		return precio;
	}

	int getStock() const {
		return stock;
	}
	

	void setNombre(const string &n) {
		nombre = n;
	}

	void setMarca(const string &m) {
		marca = m;
	}

	void setCategoria(const string &c) {
		categoria = c;
	}

	void setPrecio(const float &p) {
		precio = p;
	}

	void setStock(const int &s) {
		stock = s;
	}

};

string altaCodigo(map<string, Producto> &productos) {
	bool bandCod = 1;
	string cod2;

	while (bandCod) {
		getline(cin, cod2);
		if (productos.find(cod2) != productos.end()) {
			bandCod = 0;
			cout << "Código ya registrado, cambialo en las correcciones \n";
		}
		else
			bandCod = false;
	}

	return cod2;
}

void aMayus(string &palabra) {
	for (int i = 0; i < palabra.length(); i++) {
		if (palabra[i] >= 'a' && palabra[i] <= 'z') 
			palabra[i] -= 32;
	}
}

void correccion(string &codigoA, string &nombreA, string &marcaA, string &categoriaA, float &precioA) {
	bool bandCorreccion = 1;
	while (bandCorreccion) {
		cout << "\n";
		cout << "1) Codigo: " << codigoA << "\n";
		cout << "2) Nombre: " << nombreA << "\n";
		cout << "3) Marca: " << marcaA << "\n";
		cout << "4) Categoria: " << categoriaA << "\n";
		cout << "5) Precio: " << precioA << "\n";
		cout << "Es correcto? s/n ";
		
		char opcCorreccion;
		cin >> opcCorreccion;
		cin.ignore();
		if (opcCorreccion == 'n') {
			cout << "\n";
			cout << "Cual es el dato que desea corregir: \n";
			cout << "6) Ninguno \n";

			char campoCorregir;
			cin >> campoCorregir;
			cin.ignore();

			switch (campoCorregir) {
				case '1':
					getline(cin, codigoA);
					break;

				case '2':
					getline(cin, nombreA);
					aMayus(nombreA);
					break;

				case '3':
					getline(cin, marcaA);
					aMayus(marcaA);
					break;

				case '4':
					getline(cin, categoriaA);
					aMayus(categoriaA);
					break;

				case '5':
					cin >> precioA;
					cin.ignore();
					break;

				default:
					break;
			}
		}
		else if (opcCorreccion == 's'){
				bandCorreccion = false;
		}
		else
			cout << "Opción inválida, intenta nuevamente \n";
	}
}

void alta(map<string, Producto> &listaP) {
	string codA, nombA, marA, catA;
	float precA;
	char cat;

	cout << "Código: ";
	codA = altaCodigo(listaP);

	cout << "Nombre: ";
	getline(cin, nombA);
	aMayus(nombA);

	cout << "Marca: ";
	getline(cin, marA);
	aMayus(marA);

	cout << "Categoria: \n";
	cout << "\t a) Aviones \n";
	cout << "\t b) Automóviles \n";
	cout << "\t c) Barcos \n";
	cout << "\t d) Figuras \n";
	cout << "\t e) Otros \n";
	cin >> cat;
	switch (cat) {
		case 'a':
			catA = "AVIONES";
			break;
		case 'b':
			catA = "AUTOMOVILES";
			break;
		case 'c':
			catA = "BARCOS";
			break;
		case 'd':
			catA = "FIGURAS";
			break;
		case 'e':
			catA = "OTROS";
			break;

		default:
			cout << "Categoria inválida \n";
			cout << "Categoría 'OTROS' asignada \n";
			catA = "OTROS";
			break;
	}

	cout << "Precio: ";
	cin >> precA;
	cin.ignore();

	correccion(codA, nombA, marA, catA, precA);

	Producto nuevo(nombA, marA, catA, precA);
	listaP[codA] = nuevo;

	cout << "Producto dado de alta \n";
}

void mostrarInventario(map<string, Producto> lista) {
	map<string, Producto> :: iterator i = lista.begin();
	while (i != lista.end()) {
		cout << "Codigo: " << i->first << "\n";
		cout << "Nombre: " << i->second.getNombre() << "\n";
		cout << "Marca: " << i->second.getMarca() << "\n";
		cout << "Categoria: " << i->second.getCategoria() << "\n";
		cout << "Precio: " << i->second.getPrecio() << "\n\n";
		i++;
	}
	cin.ignore();
}

void editarProducto(map<string, Producto> &lista) {
	string cod;
	cout << "Código: ";
	getline(cin, cod);

	map<string, Producto> :: iterator i = lista.find(cod);
	if (i != lista.end()) {
		cout << "Producto encontrado \n\n";
		cout << "Nombre: " << i->second.getNombre() << "\n";
		cout << "Marca: " << i->second.getMarca() << "\n";
		cout << "Categoria: " << i->second.getCategoria() << "\n";
		cout << "Precio: " << i->second.getPrecio() << "\n\n";

		cout << "Qué campo quiere editar: \n";
		cout << "1) Codigo \n";
		cout << "2) Nombre \n";
		cout << "3) Marca \n";
		cout << "4) Categoria \n";
		cout << "5) Precio \n";
		cout << "6) Ninguno \n";

		char opc;
		cin >> opc;
		cin.ignore();

		string nuevo;
		float nuevoP;

		switch (opc) {
			case '1':
				getline(cin, nuevo);
				lista[nuevo] = i->second;
				lista.erase(i);
				break;
			case '2':
				getline(cin, nuevo);
				i->second.setNombre(nuevo);
				break;
			case '3':
				getline(cin, nuevo);
				i->second.setMarca(nuevo);
				break;
			case '4':
				getline(cin, nuevo);
				i->second.setCategoria(nuevo);
				break;
			case '5':
				cin >> nuevoP;
				cin.ignore();
				i->second.setPrecio(nuevoP);
				break;
			default:
				cout << "No se hará ningún cambio \n";
				break;
		}
	}
	else {
		cout << "Producto no encontrado \n";
	}
}

void guardarInventario(const string &nombreArchivo, const map<string, Producto> &lista) {
	ofstream archivo(nombreArchivo);
	if (archivo.is_open()) {
		for (map<string, Producto> :: const_iterator i = lista.begin(); i != lista.end(); i++) {
			archivo << i->first << "," << i->second.getNombre() << ","
					<< i->second.getMarca() << "," << i->second.getCategoria() << ","
					<< i->second.getPrecio() << "\n";
		}
		archivo.close();
	} else {
		cout << "No se pudo abrir el archivo para guardar \n";
	}
}

void cargarInventario(const string &nombreArchivo, map<string, Producto> &lista) {
	ifstream archivo(nombreArchivo);
	if (archivo.is_open()) {
		string linea;
		while(getline(archivo, linea)) {
			size_t pos1 = linea.find(",");
			size_t pos2 = linea.find(",", pos1 + 1);
			size_t pos3 = linea.find(",", pos2 + 1);
			size_t pos4 = linea.find(",", pos3 + 1);
			string codigo = linea.substr(0, pos1);
			string nombre = linea.substr(pos1 + 1, pos2 - pos1 - 1);
			string marca = linea.substr(pos2 + 1, pos3 - pos2 - 1);
			string categoria = linea.substr(pos3 + 1, pos4 - pos3 - 1);
			float precio = stof(linea.substr(pos4 + 1));

			Producto producto(nombre, marca, categoria, precio);
			lista[codigo] = producto;
		}
		archivo.close();
	}
	else {
		cout << "No se puede abrir el archivo para cargar \n";
	}
}

int main() {
	map<string, Producto> listaProductos;
	const string nombreArchivo = "inventario.txt";
	cargarInventario(nombreArchivo, listaProductos);

	bool salida = true;
	while (salida) {
		char opcion;

		cout << "\t\t\t Inventario \n";
		cout << "\t\t\t Elige una opción \n";
		cout << "\t\t 1) Alta de Producto \n";
		cout << "\t\t 2) Inventario \n";
		cout << "\t\t 3) Editar Producto \n";
		cout << "\t\t 4) Salida \n";

		cin >> opcion;
		cin.ignore();

		cout << "\033[H\033[2J";
		switch (opcion) {
			case '1':
				cout << "\n Alta de Producto \n\n";
				alta(listaProductos);
				break;
			case '2':
				cout << "\n Inventario \n\n";
				mostrarInventario(listaProductos);
				break;
			case '3':
				cout << "\n Editar Producto \n\n";
				editarProducto(listaProductos);
				break;
			case '4':
				guardarInventario(nombreArchivo, listaProductos);
				salida = 0;
				break;
			default:
				cout << "\n Ingresa una opción válida \n\n";
				break;
		}
	}

	return 0;
}
