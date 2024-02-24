#include <iostream>

using namespace std;

void sumaFilas(int m[][100], int f[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            f[i] = f[i] + m[i][j];
        }
    }
}

void sumaColumnas(int m[][100], int c[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i] = c[i] + m[j][i];
        }
    }
}

void escribirArr(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
		
	}
}

void leerFilaM(int m[][100], int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << "Ingresa un dato \n";
      cin >> m[i][j];
    }
  }
}

void escribirMat(int m[][100], int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
    int m[100][100], f[100], c[100], n;
    cout << "Ingresa el tamano de tu matriz cuadratica \n";
    cin >> n;
    leerFilaM(m,n);
    cout << "Matriz \n";
    escribirMat(m,n);
    sumaFilas(m,f,n);
    sumaColumnas(m,c,n);
    cout << "Suma de filas \n";
    escribirArr(f,n);
    cout << endl;
    cout << "Suma de columnas \n";
    escribirArr(c,n);
    cout << endl;

    return 0;
}