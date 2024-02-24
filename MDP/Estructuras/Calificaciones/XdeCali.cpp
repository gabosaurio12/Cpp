#include <iostream>
#include <string>

using namespace std;

struct alumno{
    string nombre;
    int cal1;
    int cal2;
    int cal3;
};

void leerEst(alumno e[], int n){
    cout << "Leyendo estudiantes \n";
    for (int i = 0; i < n; i++){
        cout << "Nombre: ";
        cin >> e[i].nombre;
        cout << "Calificacion 1: ";
        cin >> e[i].cal1;
        cout << "Calificacion 2: ";
        cin >> e[i].cal2;
        cout << "Calificacion 3: ";
        cin >> e[i].cal3;
    }
}

int posEst(alumno e[], int n){
    string nom;
    cout << "Ingresa el nombre del estudiante: ";
    cin >> nom;
    for (int i = 0; i < n; i++){
        if (e[i].nombre == nom){
            return i;
        }
    }
    return 0;
}

void promEst(alumno e[], int n){
    int l = posEst(e,n);
    int suma, prom;
    cout << "Promedio de estudiante \n";
    suma = e[l].cal1 + e[l].cal2 + e[l].cal3;
    prom = suma / 3;
    cout << "Promedio: " << prom << endl;
}

void suma(alumno e[], int a[], int n){
    for (int i = 0; i < n; i++){
        int sumC = e[i].cal1 + e[i].cal2 + e[i].cal3;
        int proC = sumC/3;
        a[i] = proC;
    }
}

void promClase(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    int prom = sum / n;
    cout << "El promedio de la clase es: " << prom << endl;
}

int main(){
    alumno base[40];
    int sumas[40];
    int n = 5;
    leerEst(base,n);
    promEst(base,n);
    suma(base,sumas,n);
    promClase(sumas,n);
    
    return 0;
}