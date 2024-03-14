#include <iostream>

using namespace std;

struct asiento{
    int fila;
    int col;
    char estado;
};

void llenado(asiento asientos[][4]){
    int a = 65;
    for (int i = 1; i < 11; i++){
        asientos[i][0].fila = a;
        a++;
    }
    for (int i = 1; i < 5; i++)
        asientos[0][i].col = i;
    
    for (int i = 1; i < 11; i++){
        for (int j = 1; j < 5; j++)
            asientos[i][j].estado = 'L';
    }
}

void imprimirAsientos(asiento asientos[][4]){
    for (int i = 1; i < 11; i++){
        if (i == 2)
            cout << "\t";
        cout << asientos[0][i].col << "  ";
        for (int j = 0; j < 5; j++)
            cout << asientos[j][i].estado;
        cout << "\n";
    }
}

int main(){
    asiento arrAsientos[10][4];
    llenado(arrAsientos);
    imprimirAsientos(arrAsientos);
    return 0;
}
