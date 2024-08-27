#include <iostream>

using namespace std;

void HorasExtra(int &band, int horas){
    if (horas > 40){
        band = true;
    }
}

void Salario(int band, float horas, float salarioh){
    float salario;
    if (not band){
        salario = salarioh * 1.5 * horas;
        cout << "Tu salario es de " << salario << endl;
    }
    else{
        salario = salarioh * horas;
        cout << "Tu salario es de " << salario << endl;
    }
}

int main(){
    float horas, salarioBase;
    int band = true;
    cout << "Ingresa las horas extra que trabajaste ";
    cin >> horas;
    cout << "Ingresa tu salario base ";
    cin >> salarioBase;
    HorasExtra(band,horas);
    Salario(band,horas,salarioBase);

    return 0;
}