#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Persona {
	private:
		string nombre;
		string curp;
		int edad;
		char sexo;
		float peso;
		float altura;

	public:
		string generarCurp(string nombreAux, int edad, char sex) {
			string curpAux = "";
			curpAux += toupper(nombreAux[0]);
			int i = 1;
			
			while (nombreAux[i] != '\0') {
				if (nombreAux[i] == ' '){
					char letra = toupper(nombreAux[i+1]);
					curpAux += nombreAux[i+1];
				}
				i++;
			}

			curpAux += to_string(edad);

			static bool srand_initialized = false;
			if (!srand_initialized) {
				srand(time(0));
				srand_initialized = true;
			}

			for (i = 0; i < 5; i++) {
				int ranNum = rand() % 10;
				string nStr = to_string(ranNum);
				curpAux += nStr;
			}

			curpAux += sex;

			return curpAux;
		}

		Persona(string nombre2, int edad2, float peso2, float altura2, char sexo2) {
			this->nombre = nombre2;
			this->edad = edad2;
			this->peso = peso2;
			this->altura = altura2;
			this->sexo = toupper(sexo2);
			string curpAux = generarCurp(nombre, edad, sexo);
			this->curp = curpAux;
		}

		void imprimirDatos() {
			cout << "Nombre " << this->nombre << "\n";
			cout << "CURP " << this->curp << "\n";
			cout << "Edad " << this->edad << "\n";
			cout << "Altura " << this->altura << "\n";
			cout << "Peso " << this->peso << "\n";
			cout << "Género " << this->sexo << "\n";
		}

		int calcularIMC() {
			float imc = this->peso / (this->altura * this->altura);
			int valor = imc < 20 ? -1 : imc < 26 ? 0 : 1;
			return valor;
		}

		bool esMayorDeEdad() {
			bool mayor = this->edad > 17 ? 1 : 0;
			return mayor;
		}
};

int main() {
	string nombreAux;
	int edadAux;
	float pesoAux, alturaAux;
	char generoAux;
	
	cout << "Nombre ";
	getline(cin, nombreAux);
	cout << "Edad ";
	cin >> edadAux;
	cout << "Peso ";
	cin >> pesoAux;
	cout << "Altura ";
	cin >> alturaAux;
	cout << "Genero H/M ";
	cin >> generoAux;

	Persona p1(nombreAux, edadAux, pesoAux, alturaAux, generoAux);
	p1.imprimirDatos();
	cout << "\n";
	cout << "Es mayor " << p1.esMayorDeEdad() << "\n";
	cout << "IMC " <<p1.calcularIMC() << "\n";

	cin.ignore();
	cout << "Nombre ";
	getline(cin, nombreAux);
	cout << "Edad ";
	cin >> edadAux;
	cout << "Peso ";
	cin >> pesoAux;
	cout << "Altura ";
	cin >> alturaAux;
	cout << "Genero H/M ";
	cin >> generoAux;

	Persona p2(nombreAux, edadAux, pesoAux, alturaAux, generoAux);
	p2.imprimirDatos();
	cout << "\n";
	cout << "Es mayor " << p2.esMayorDeEdad() << "\n";
	cout << "IMC " <<p2.calcularIMC() << "\n";

	return 0;
}