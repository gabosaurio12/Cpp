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

int main(){
    int matAsientos[8][5];

    llenado(matAsientos);
    imprimirAsientos(matAsientos);

    return 0;
}
