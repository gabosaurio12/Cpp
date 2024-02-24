#include <iostream>

using namespace std;

void intercambio(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int main (){
    int n1, n2;

    cout << "Ingresa el primer numero \n";
    cin >> n1;
    cout << "Ingresa el segundo numero \n";
    cin >> n2;

    cout << "Se ven asi: " << n1 << " " << n2 << endl;

    intercambio(n1,n2);

    cout << "Quedan asi: " << n1 << " " << n2 << endl;

    return 0;
}
