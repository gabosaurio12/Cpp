#include <iostream>
#include <string>

using namespace std;

void dibujo(string mat[][5]){
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			mat[i][j] = "  ";
		}
	}

	for(int i = 1; i < 6; i++){
		for(int j = 2; j < 5;j++){
			mat[i][j] = "|";
		}
	}
	for(int i = 2; i < 5; i+=2){
		for(int j = 1; j < 6;j++){
			mat[i][j] = "_";
		}
	}
}

void escribirMat(string m[][5], int nf, int nc){
    for (int i = 0; i < nf; i++){
		for (int j = 0; j < nc; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
    }
}


int main(){
	string gato[5][5];
	dibujo(gato);
	escribirMat(gato,5,5);

	return 0;
}