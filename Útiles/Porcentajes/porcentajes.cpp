#include <iostream>

using namespace std;

float cantidad(float n100, float por){
    float res;

    res = (por * n100) / 100;

    return res;
}

float porcentaje(float n, float n100){
    float respor;

    respor = (n * 100) / n100;

    return respor;
}

int main(){
    char oper;
    float n, n100, por;

    cout << "Convertir una cantidad en porcentaje (c) o calcular un porcentaje de una cantidad (p) \n";
    cin >> oper;

    if (oper == 'c'){
        cout << "Ingresa el porcentaje que quieres calcular \n";
        cin >> por;
        cout << "Ingresa el numero que es el 100% \n";
        cin >> n100;

        cout << "El " << por << "% de " << n100 << " es: " << cantidad(n100, por) << endl;
    }
    if (oper == 'p'){
        cout << "Ingresa el numero que es el 100% \n";
        cin >> n100;
        cout << "Ingresa el numero que quieres saber su equivalencia en porciento \n";
        cin >> n;
        
        cout << n << " equivale al: " << porcentaje(n,n100) << "% \n";
    }

    return 0;
}
