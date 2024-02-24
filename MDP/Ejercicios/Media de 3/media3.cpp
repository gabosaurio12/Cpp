#include <iostream>

using namespace std;

void media3(int n1, int n2, int n3, int &suma, int &prom){
    suma = n1 + n2 + n3;
    prom = suma / 3;
}

int main(){
    int suma, promedio;
    media3(5,5,5,suma,promedio);
    cout << "La suma es: " << suma << endl;
    cout << "Se divide " << suma << " Entre 3 " << endl;
    cout << "El promedio es " << promedio <<endl;

    return 0;
}