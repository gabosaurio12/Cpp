#include <iostream>

using  namespace std;

void ProdMatriz(int m[][100], int nf, int nc){
  for (int i = 0; i < nf; i++){
    for (int j = 0; j < nc; j++){
      m[i][j] = i * j;
    }
  }
}

void LeerMatrizFila(int m[][100], int nf, int nc){
  for (int i = 0; i < nf; i++){
    for (int j = 0; j < nc; j++){
      cout << "Ingresa un dato \n";
      cin >> m[i][j];
    }
  }
}

void EscribirMatriz(int m[][100], int nf, int nc){
  for (int i = 0; i < nf; i++){
    for (int j = 0; j < nc; j++){
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  int matriz[100][100], filas, columnas;
  cout << "Filas, columnas \n";
  cin >> filas >> columnas;
  LeerMatrizFila(matriz,filas,columnas);
  ProdMatriz(matriz,filas,columnas);
  EscribirMatriz(matriz,filas,columnas);

  return 0;
}
