#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void vect() {
	cout << "\033[H\033[2J";
	vector<int> vec;

	cout << "Ingresa un número negativo para dejar de leer \n";
	cout << "Ingresa un dato ";
	int dato;
	cin >> dato;
	while (dato > -1) {
		vec.push_back(dato);
		cout << "Ingresa un dato ";
		cin >> dato;
	}

	cout << "\n";
	cout << "Tamaño: " << vec.size() << "\n";
	cout << "Capacidad: " << vec.capacity() << "\n";
	cout << "Vector \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << "\n";

	vec.resize(vec.size()/2);

	cout << "\nVector ajustado a la mitad de su tamaño: " << vec.size() << "\n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << "\n";
}

string generarClave(int n) {
	return to_string(n);
}

void mapas(){
	cout << "\033[H\033[2J";
	map<string, int> mapa;
	int num = 1;

	cout << "Ingresa un número negativo para dejar de leer \n";
	cout << "Ingresa un dato ";
	int dato;
	cin >> dato;
	while (dato > -1) {
		string clave = generarClave(num);
		mapa[clave] = dato;
		num++;
		cin >> dato;
	}

	map<string, int> :: iterator it = mapa.begin();

	cout << "\nTamaño: " << mapa.size() << "\n";

	cout << "\tCLAVE\tVALOR\n";
	while (it != mapa.end()) {
		cout << "\t" << it->first << "\t";
		cout << it->second << "\n";
		it++;
	}
}

void menu() {
	cout << "\033[H\033[2J";
	cout << "Biblioteca ST \n";
	cout << "1. Vector \n";
	cout << "2. Map \n";
	cout << "3. salir \n";
}

int main() {
	menu();
	char oper;
	cin >> oper;

	while (oper != '3') {
		if (oper == '1')
			vect();
		else if (oper == '2')
			mapas();

		cout << "\n";
		cout << "1. Vector \n";
		cout << "2. Map \n";
		cout << "3. salir \n";
		cin >> oper;
	}

	return 0;
	
}