#include <iostream>

using namespace std;

void llenado(int arrAsientos[][4]){
    arrAsientos[0][0] = 45;
    
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

    for (int i = 1; i < 11; i++){
        for (int j = 1; j < 5; j++)
            arrAsientos[i][j] = 76;
    }
}

void imprimirAsientos(int arrAsientos[][4]){
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 5; j++){
            /*if (j == 3){
                cout << "\t" << char(arrAsientos[i][j]) << " ";
            }
            else
                cout << char(arrAsientos[i][j]) << " ";*/
            cout << arrAsientos[i][j] << " ";
        }
        cout << "\n";
    }
}

void apartado(int arrAsientos[][4], char f, int c){
    if (arrAsientos[f][c] == 'O'){
        cout << "Este asiento no esta disponible \n";
    }
    else{
        arrAsientos[f][c] = 'O';
    }
}

int main(){
    int arrAsientos[10][4];
    llenado(arrAsientos);
    imprimirAsientos(arrAsientos);
    return 0;
}
