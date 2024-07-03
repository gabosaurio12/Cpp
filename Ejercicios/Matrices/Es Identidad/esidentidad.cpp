#include <iostream>

using namespace std;

int esIdentidad(int matriz[][100], int n, int &band){
    int i = 0;
    while (band && i < n){
        if (matriz[i][i] != 1){
            band = 0;
        }
        else{
            int j = i + 1;
            while (band && j < n){
                if (matriz[i][j] != 0 || matriz[j][i] != 0){
                    band = 0;
                }
                j++;
            }
        }
        i++;
    }
    return band;
}

void LeerMatrizFila(int m[][100], int nf, int nc){
  for (int i = 0; i < nf; i++){
    for (int j = 0; j < nc; j++){
      cout << "Ingresa un dato \n";
      cin >> m[i][j];
    }
  }
}

int main(){
    int m[100][100], tamano, band;
    cout << "Ingresa el numero de filas de tu matriz CUADRATICA \n";
    cin >> tamano;
    band = 1;

    LeerMatrizFila(m,tamano,tamano);
    esIdentidad(m,tamano,band);
    if (band == 1){
        cout << "Es matriz identidad \n";
    }
    else{
        cout << "No es matriz identidad \n";
    }

    return 0;
}