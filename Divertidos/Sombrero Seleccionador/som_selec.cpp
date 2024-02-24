#include <iostream>

using namespace std;

int main(){
    char respuesta;

    cout << "En caso de emergencia que salvarias: \n";
    cout << "a) Un registro de todos los alumnos de Hogwarts \n";
    cout << "b) Un libro de encantamientos \n";
    cout << "c) Una pocion de felix felicis \n";
    cout << "d) Una pocion para curar la fiebre de dragon \n";
    cin >> respuesta;

    switch (respuesta){
        case 'a':
        cout << "Ravenclaw! \n";
        break;
        case 'b':
        cout << "Gryffindor! \n";
        break;
        case 'c':
        cout << "Slytherin! \n";
        break;
        case 'd':
        cout << "Hufflepuff \n";
        break;

        default:
        cout << "Ingresa un valor correcto \n";
        break;
    }

    return 0;
}