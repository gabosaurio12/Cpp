#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Juguete {
    string nombre;
    int cantidad;
    double precio;
};

void guardarInventario(const vector<Juguete>& inventario, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        for (const auto& juguete : inventario) {
            archivo << juguete.nombre << "," << juguete.cantidad << "," << juguete.precio << "\n";
        }
        archivo.close();
    } else {
        cerr << "No se pudo abrir el archivo para guardar el inventario." << endl;
    }
}

vector<Juguete> cargarInventario(const string& nombreArchivo) {
    vector<Juguete> inventario;
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            Juguete juguete;
            size_t pos1 = linea.find(",");
            size_t pos2 = linea.find(",", pos1 + 1);

            juguete.nombre = linea.substr(0, pos1);
            juguete.cantidad = stoi(linea.substr(pos1 + 1, pos2 - pos1 - 1));
            juguete.precio = stod(linea.substr(pos2 + 1));

            inventario.push_back(juguete);
        }
        archivo.close();
    } else {
        cerr << "No se pudo abrir el archivo para cargar el inventario." << endl;
    }
    return inventario;
}

int main() {
    vector<Juguete> inventario = cargarInventario("inventario.txt");

    // Ejemplo de agregar un nuevo juguete
    Juguete nuevoJuguete = {"Carrito", 10, 19.99};
    inventario.push_back(nuevoJuguete);

    guardarInventario(inventario, "inventario.txt");

    // Mostrar inventario cargado
    for (const auto& juguete : inventario) {
        cout << "Nombre: " << juguete.nombre << ", Cantidad: " << juguete.cantidad << ", Precio: $" << juguete.precio << endl;
    }

    return 0;
}
