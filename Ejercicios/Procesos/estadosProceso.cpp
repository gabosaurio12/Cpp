/*
 * Enunciado: Realice un programa que muestre todos los estados de un proceso
 *
 * Análisis:
 *  Salida: Mostar: Nuevo, En ejecución, En Espera, Preparado, Terminado.
 *  Entrarada:
 *  Proceso: Construir una función que muestre el primer estado del proceso, la 
 *      función mostrará un mensaje de que el proeso ha sido creado, Construir una
 *      función que muestre que el proceso está en ejecución con un mensaje que hable
 *      acera de este estado, construir una fucnión que muestre el mensaje en espera,
 *      construir una función que indique que el proceso está preparado para hacer
 *      algo, construir una función que indique que el proceso ha terminado,
 *      construir la función principal que invocará las funciones anteriormente
 *      creadas, terminar el programa.
 */

#include <iostream>
#include <unistd.h>
#include "calculadora.cpp"

using namespace std;

void imprimirPuntos() {
    for (int i = 0; i < 3; i++) {
        usleep(750000);
        cout << ".";
        cout.flush();
    }
    usleep(750000);
    cout << endl;
}

void crearProceso() {
    cout << "Creando un PROCESO NUEVO ";
    usleep(200000);
    imprimirPuntos();
}

void crearProcesoEnEjecucion() {
    usleep(1000000);
    cout << "Proceso EN EJECUCION ";
    usleep(200000);
    imprimirPuntos();
}

void crearProcesoEnEspera() {
    usleep(500000);
    cout << "Proceso EN ESPERA ";
    usleep(200000);
    imprimirPuntos(); 
}

void crearProcesoPreparado() {
    usleep(500000);
    cout << "Proceso PREPARADO ";
    usleep(200000);
    imprimirPuntos();
}

void crearProcesoTerminado() {
    usleep(500000);
    cout << "Proceso TERMINADO ";
    usleep(200000);
    imprimirPuntos();
}

int main() {
    crearProceso();

    crearProcesoEnEjecucion();
    char oper = menu();

    crearProcesoEnEspera();
    float numero1, numero2;
    leerDatos(numero1, numero2);
    float resultado = oper == '1' ? multiplicacion(numero1, numero2) :
        oper == '2' ? division(numero1, numero2) : -1;
    crearProcesoPreparado();

    cout << resultado << endl;
    crearProcesoTerminado();

    return 0;

}
