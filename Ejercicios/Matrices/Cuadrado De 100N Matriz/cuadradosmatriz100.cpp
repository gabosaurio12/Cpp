#include <iostream>

using namespace std;

void LeerMatrizFila(int m[][100], int n){
	int k = 1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			m[i][j] = k;
			k++;
		}
	}
}

void elevarPotencia(int m[][100], int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			m[i][j] = m[i][j] * m[i][j];
		}
	}
}

void EscribirMatriz(int m[][100], int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
    int n, m[100][100];
    n = 10;
    LeerMatrizFila(m,n);
	cout << "Matriz original \n";
    EscribirMatriz(m,n);
	elevarPotencia(m,n);
	cout << "Matriz elevada \n";
	EscribirMatriz(m,n);

    return 0;
}
