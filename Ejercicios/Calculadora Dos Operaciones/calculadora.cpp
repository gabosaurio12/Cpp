#include <iostream>

using namespace std;

void leerDatos(float &numero1, float &numero2) {
    cout << "Ingresa el numero 1 ";
    cin >> numero1;
    cout << "Ingresa el numero 2 ";
    cin >> numero2;
}

float multiplicacion(float multiplicando, float multiplicador) {
    float producto = 0;
    for (int i = 0; i < multiplicador; i++) {
        producto += multiplicando;
    }

    return producto;
}

float division(float divisor, float dividendo) {
    float cociente = 0;
    while (dividendo > 0) {
        dividendo -= divisor;
        cociente++;
    }

    return cociente;
}

int main() {
    cout << "CALCULADORA \n";
    cout << "1. Multiplicacion \n";
    cout << "2. Division \n";
    cout << "3. Salir \n";
    char opc;
    cin >> opc;

    float numero1 = 0;
    float numero2 = 0;
    
    if (opc == '1') {
        leerDatos(numero1, numero2);
        cout << "Resultado = " <<  multiplicacion(numero1, numero2) << "\n";
    } else if (opc == '2') {
        leerDatos(numero1, numero2);
        cout << "Resultado = " << division(numero2, numero1) << "\n";
    }


    return 0;
}
