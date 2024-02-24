#include <iostream>

using namespace std;

void LeerMatCuadFila(int m[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout << "Ingresa un dato \n";
        cin >> m[i][j];
        }
    }
}

void EscribirMatCuad(int m[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void matrizT(int m[][100], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            int aux;
            aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
}

int esSimetrica(int m[][100], int n){
    int mT[100][100], band;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mT[i][j] = m[i][j];
            mT[j][i] = m[j][i];
        }
    }

    matrizT(mT,n);
    cout << "Matriz transpuesta \n";
    EscribirMatCuad(mT,n);

    band = 1;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (mT[i][j] != m [i][j] || mT[j][i] != m [j][i]){
                band = 0;
            } 
        }
    }
    return band;

}

int main (){
    int matriz[100][100], n, simetrica;
    cout << "Ingresa el tamano de tu matriz \n";
    cin >> n;
    LeerMatCuadFila(matriz,n);
    cout << "Matriz \n";
    EscribirMatCuad(matriz,n);

    simetrica = esSimetrica(matriz,n);

    if (simetrica == 0){
        cout << "No es simetrica \n";
    }
    else{
        cout << "Es simetrica \n";
    }

    return 0;
}