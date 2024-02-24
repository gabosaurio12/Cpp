#include <iostream>

using namespace std;

void leerFilaM(int m[][100], int nf, int nc){
    for (int i = 0; i < nf; i++){
		for (int j = 0; j < nc; j++){
		    cout << "Ingresa un dato \n";
	    	cin >> m[i][j];
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

int perimetro(int m[][100], int nf, int nc){
	int suma;
	suma = 0;
	for(int i = 0; i < nc; i++){
		suma = suma + m[0][i];
		suma = suma + m[nf-1][i];
	}
	for(int i = 1; i < nc-1; i++){
		suma = suma + m[i][0];
		suma = suma + m[i][nc-1];
	}
	return suma;
}

int main(){
	int matriz[100][100], nf, nc;
	cout << "Numero de filas ";
	cin >> nf;
	cout << "Numero de columnas ";
	cin >> nc;
	leerFilaM(matriz,nf,nc);
	escribirMat(matriz,nf,nc);
	cout << perimetro(matriz,nf,nc) << "\n";

	return 0;
}