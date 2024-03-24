#include <iostream>
#include <string>

using namespace std;

void llenado(int mA[][5]){
    mA[0][0] = 126;

    int l = 65;
    for (int i = 1; i < 8; i++){
        mA[i][0] = l;
        l++;
    }

    int n = 49;
    for (int i = 1; i < 5; i++){
        mA[0][i] = n;
        n++;
    }

    for (int i = 1; i < 8; i++){
        for (int j = 1; j < 5; j++){
            mA[i][j] = 76;
        }
    }
}

void imprimirAsientos(int mA[][5]){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 5; j++){
            if (j == 3){
                cout << "\t";
            }
            cout << " " << char(mA[i][j]) << " ";
        }
        cout << "\n";
    }
}

int apartar(int mA[][5], string asiento){
    int l = int(asiento[0]) - 64;
    int n = int(asiento[1]) - 48;

    if (mA[l][n] == 79){
        cout << "Ingresa un asiento vacio ";
        cout << "O ingresa 's' para salir \n";
        cin >> asiento;

        if (asiento == "s" || asiento == "S")
            return 0;

        else
            return apartar(mA, asiento);
    }

    else{
        mA[l][n] = 79;
        return 1;
    }

    return 0;
}

int main(){
    int matAsientos[8][5];
    string asientoAp;

    llenado(matAsientos);
    imprimirAsientos(matAsientos);

    int band = 1;
    int c = 0;
    while (band){
        cout << "Ingresa el asiento que deseas apartar \n";
        cin >> asientoAp;

        if (apartar(matAsientos, asientoAp)){
            cout << "Tu asiento ha sido apartado exitosamente \n";
            imprimirAsientos(matAsientos);
            c++;
        }
        else{
            return 0;
        }

        if (c == 28)
            cout << "El vuelo esta lleno \n";
            return 0;

        else{
            char sn;
            cout << "Deseas leer otro asiento? s/n \n";
            cin >> sn;
            if (sn == 'n' || sn == 'N')
                band = 0;
        }
    }
    
    return 0;
}
