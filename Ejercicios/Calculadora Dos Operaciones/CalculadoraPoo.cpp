#include <iostream>

using namespace std;

class Calculadora {
    private:
        float numero1;
        float numero2;

    public:
        void setNumero1(float numero1) {
            this->numero1 = numero1;
        }

        float getNumero1() {
            return numero1;
        }

        void leerDatos() {
            cout << "Ingresa el numero 1 ";
            cin >> numero1;
            cout << "Ingresa el numero 2 ";
            cin >> numero2;
        }

        float multiplicacion() {
            float producto = 0;
            for (int i = 0; i < numero2; i++) {
                producto += numero1;
            }

            return producto;
        }

        float division() {
            float cociente = 0;
            if (numero2 == 0) {
                cout << "Error: No se puede dividir entre 0 \n";
                cociente = -1;
            } else {
                while (numero1 > 0) {
                    numero1 -= numero2;
                    cociente++;
                }
            }
            
            return cociente;
        }
};
