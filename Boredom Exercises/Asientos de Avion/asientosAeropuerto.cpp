#include <iostream>
#include <string>

using namespace std;

void llenado(int arrAsientos[][5]){
    arrAsientos[0][0] = 126;
    
    for (int i = 1; i < 11; i++){
        for (int j = 1; j < 5; j++)
            arrAsientos[i][j] = 76;
    }
    int n = 49;
    for (int i = 1; i < 5; i++){
        arrAsientos[0][i] = n;
        n++;
    }
    
    int a = 65;
    for (int i = 1; i < 11; i++){
        arrAsientos[i][0] = a;
        a+=1;
    }
}

void imprimirAsientos(int arrAsientos[][5]){
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 5; j++){
            if (j == 3){
                cout << "\t" << char(arrAsientos[i][j]) << " ";
            }
            else
                cout << char(arrAsientos[i][j]) << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int convLetraNum(char l){
    for (int i = 65; i < 75; i++){
        if (int(l) == i){
            return i - 16;
        }
    }
    return 0;
}


/*void convertirEnMayus(char &c){
    c -= 32;
}

int esMinuscula(char c){
    if (int(c) > 96 && int(c) < 107)
        return 1;
    return 0;
}

void validarLetra(char c){
    if (int(c) > 64 && int(c) < 107){
        if(esMinuscula(c))
            convertirEnMayus(c);
    }
}*/

void apartado(int arrAsientos[][5], char l, int n){
    int f = convLetraNum(l);

    cout << f << "\n";
    if (arrAsientos[f][n] == 79)
        cout << "Este asiento no esta disponible \n\n";
    else{
        arrAsientos[f][n] = 79;
        cout << "Asiento apartado\n\n";
    }
}

int main(){
    int arrAsientos[10][5];
    llenado(arrAsientos);
    
    char opc = 's';
    cout << "\t\t Asientos del Vuelo 505\n";

    while (1){    
        imprimirAsientos(arrAsientos);

        string asiento;
        cout << "s/0 para salir \n";
        cout << "Ingresa el asiento que quieres apartar ";
        cin >> asiento;

        if (asiento == "s" || asiento == "0")
            return 0;

        //validarLetra(asiento[0]);
        char letra = asiento[0];
        char numero = asiento[1];
        numero = numero - '0';

        apartado(arrAsientos,letra,numero);

    }

    return 0;
}
