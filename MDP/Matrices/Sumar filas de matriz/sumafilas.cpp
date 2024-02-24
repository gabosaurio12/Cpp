#include <iostream>

using namespace std;

void LeerMatriz(int m[][100], int nf, int nc){
    for (int i = 0; i < nf; i++){
        for (int j = 0; j < nc; j ++){
            cout << "Ingresa un dato \n";
            cin >> m[i][j];
        }
    }
}

void SumaFilas(int m[][100], int nf, int nc){
    int suma = 0;
    for (int i = 0; i < nf; i++){
        suma = 0;
        for (int j = 0; j < nc; j++){
            suma = suma + m[i][j];
        }
        cout << "Fila " << i << " : " << suma << endl;
    }
}

int main(){
    int matrix[100][100], f, c;

    cout << "Ingresa f y c \n";
    cin >> f >> c;
    LeerMatriz(matrix,f,c);
    SumaFilas(matrix, f, c);

    return 0;
}