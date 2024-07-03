#include <iostream>

using namespace std;

void intercambio(int a, int b){
    int aux = a;
    a = b;
    b = aux;
}

int main (){
    int n1, n2;

    cout << "Ingresa el primer numero \n";
    cin >> n1;
    cout << "Ingresa el segundo numero \n";
    cin >> n2;

    intercambio(n1,n2);
	
    return 0;
}
