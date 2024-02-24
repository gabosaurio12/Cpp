#include <iostream>

using namespace std;

void cambiaFilas(int m[][100], int n){
    int i = 0;
    for (int j = 0; j < n; j++){
        int aux = m[i][j];
        m[i][j] = m[n-1][j];
        m[n-1][j] = aux;
    }
}

void EscribirMatCuad(int m[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void LeerMatCuadFila(int m[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        cout << "Ingresa un dato \n";
        cin >> m[i][j];
        }
    }
}

int main(){
    int m[100][100], n;
    cin >> n;
    LeerMatCuadFila(m,n);
    cout << "Matriz \n";
    EscribirMatCuad(m,n);
    
    cambiaFilas(m,n);
    cout << "Matriz con filas cambiadas \n";
    EscribirMatCuad(m,n);

    return 0;
}