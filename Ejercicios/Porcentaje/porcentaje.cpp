#include <iostream>

using namespace std;

float Porcentaje(float n, float p){
    float resultado;
    resultado = (p * n) / 100;

    return resultado;
}

int main(){
    float n, p, resultado;

    cout << "Ingresa el numero del que quieres calcular su porcentaje \n";
    cin >> n;
    cout << "Ingresa el porcentaje que quieres calcular \n";
    cin >> p;

    cout << "El resultado es: " << Porcentaje(n,p) << endl;

    return 0;
}