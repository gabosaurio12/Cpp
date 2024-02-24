#include <iostream>

using namespace std;

void leerFilaM(int m[][100], int n){
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    cout << "Ingresa un dato \n";
		    cin >> m[i][j];
		}
    }
}

void leerColM(int m[][100], int n){
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    cout << "Ingresa un dato \n";
		    cin >> m[j][i];
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

void leerFilaM(int m[][100], int nf, int nc){
    for (int i = 0; i < nf; i++){
		for (int j = 0; j < nc; j++){
		    cout << "Ingresa un dato \n";
		    cin >> m[i][j];
		}
    }
}

void leerColM(int m[][100], int nf, int nc){
    for (int i = 0; i < nc; i++){
		for (int j = 0; j < nf; j++){
		    cout << "Ingresa un dato \n";
		    cin >> m[j][i];
		}
    }
}

void escribirMat(int m[][100], int nf, int nc){
    for (int i = 0; i < nf; i++){
		for (int j = 0; j < nc; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
    }
}

int main(){
    int filas, columnas, matrizfila[100][100], matrizcol[100][100];
    return 0;
}
