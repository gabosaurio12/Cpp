#include <iostream>

using namespace std;

void multi(int a[][100], int b[][100], int c[][100], int m, int p, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            for (int k = 0; k < n; k++){
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
}

void obtenerDatos(int &m,int &n, int &p, int &q){
    cout << "Ingresa las filas de la matriz 'a' \n";
    cin >> m;
    cout << "Ingresa las columnas de la matriz 'a' \n";
    cin >> n;
    cout << "Ingresa las filas de la matriz 'b' \n";
    cin >> p;
    cout << "Ingresa las columnas de la matriz 'b' \n";
    cin >> q;
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
    int m, n, p, q, a[100][100], b[100][100], c[100][100];
    obtenerDatos(m,n,p,q);
    cout << "Matriz A  \n";
    LeerMatrizFila(a,m,n);
    EscribirMatriz(a,m,n);
    cout << "Matriz B \n";
    LeerMatrizFila(b,p,q);
    EscribirMatriz(b,p,q);

    multi(a,b,c,m,p,n);
    cout << "Matriz C \n";
    EscribirMatriz(c,m,p);

    return 0;
}