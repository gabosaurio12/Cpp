#include <iostream>
using namespace std;
int main (){

    // declaracion de variables
    int n, i;
    bool band;

    // INICIO
    cout << "Introduce un numero \n";
    cin >> n;
    i = 2;
    band = true;

    while (band == true && i < n){
        if (n % i == 0) {
            band = false;
        }
        i++;
    }
    if (band == true){
        cout << "Es primo \n";
    }
    else {
        cout << "No es primo \n";
    }

    return 0;

}
