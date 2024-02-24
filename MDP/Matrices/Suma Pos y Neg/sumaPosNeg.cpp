#include <iostream>

using namespace std;

void sumaPN(int t[][100], int f, int c){
	int z, cP, sP, cN, sN;
	z = 0;
	cP = 0;
	sP = 0;
	cN = 0;
	sN = 0;

	for (int y = 0; y < f; y++){
		for (int x = 0; x < c; x++){
			if (t[y][x] == 0){
				z += 1;
			}
			else {
				if (t[y][x] > 0){
					cP += 1;
					sP = sP + t[y][x];
				}
				else {
					cN += 1;
					sN = sN + t[y][x];
				}
			}
		}
	}

	cout << "Positivos: " << cP << " Suma: " << sP << endl;
	cout << "Negativos: " << cN << " Suma: " << sN << endl;
	cout << "Ceros: " << z << endl;
}

void leerM(int m[][100], int nf, int nc){
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

int main(){
	int m[100][100], fil, col;
	cout << "Filas: ";
	cin >> fil;
	cout << "Columnas: ";
	cin >> col;

	leerM(m,fil,col);
	escribirMat(m,fil,col);
	sumaPN(m,fil,col);
	
	return 0;
}