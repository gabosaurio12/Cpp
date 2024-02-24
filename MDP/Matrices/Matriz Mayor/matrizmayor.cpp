#include <iostream>

using namespace std;

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

int mayor(int m[][100], int nf, int nc){
  int mayor;
  mayor = m[0][0];
  for (int i = 0; i < nf; i++){
    for (int j = 0; j < nc; j++){
      if (m[i][j] > mayor){
	mayor = m[i][j];
      }
    }
  }
  return mayor;
}

int main(){
  int matriz[100][100], filas, columnas;
  cout << "Filas y columnas \n";
  cin >> filas >> columnas;
  LeerMatrizFila(matriz,filas,columnas);
  EscribirMatriz(matriz,filas,columnas);
  cout << "El mayor es: " << mayor(matriz,filas,columnas) << endl;

  return 0;
}
