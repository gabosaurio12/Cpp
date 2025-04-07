#include <iostream>
#include "CalculadoraPoo.cpp"

using namespace std;

class Main {
    public:
        int ejecutar() {
            Calculadora calculadora;
            bool band = true;
            while (band) {
                cout << "CALCULADORA \n";
                cout << "1. Multiplicacion \n";
                cout << "2. Division \n";
                cout << "3. Salir \n";
                char opc;
                cin >> opc;

                
                if (opc == '1') {
                    calculadora.leerDatos();
                    cout << "Resultado = " << calculadora.multiplicacion() << "\n";
                } else if (opc == '2') {
                    calculadora.leerDatos();
                    cout << "Resultado = " << calculadora.division() << "\n";
                } else {
                    band = false;
                }

            }
            return 0;
        }
};

int main() {
    Main main;
    return main.ejecutar();
}
