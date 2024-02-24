#include <iostream>

using namespace std;

void HorasExtra(int &band, int horas){
    if (horas > 40){
        band = 0;
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
    float horas, salarioh;
    int band = true;
    HorasExtra(band,41);
    Salario(0,5,10);

    return 0;
}