#include <iostream>

using namespace std;

int main(){
    int dia;

    cout << "Ingresa el numero de dia \n";
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Lunes \n";
        break;
    case 2:
        cout << "Martes \n";
        break;
    case 3:
        cout << "Miercoles \n";
        break;;
    case 4:
        cout << "Jueves \n";
        break;
    case 5:
        cout << "Viernes \n";
        break;
    case 6:
        cout << "Sabado \n";
        break;
    case 7:
        cout << "Domingo \n";
        break;
    
    default:
        cout << "Ingresa un valor del 1 al 7 por favor \n";
        break;
    }

    return 0;
}