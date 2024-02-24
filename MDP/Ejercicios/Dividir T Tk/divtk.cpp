#include <iostream>

using namespace std;

void LeerArr(int a[], int n){
        for (int i = 0; i < n; i++){
                cout << "Introduce un dato \n";
                cin >> a[i];
        }
}

void EscribirArr(int a[], int n){
        for (int i = 0; i < n; i++){
                cout << a[i] << " ";               
        }
}

void TdivK(int a[], int k, int n){
	int i = 0;
	int Tk[100];
	do{
		int div;
		div = a[i] / k;
		Tk[i] = div;
		i++;
	}while(i < n);
	cout << endl;
	cout << "Arreglo Tk ";
	EscribirArr(Tk,n);
	cout << endl;
}

int main(){
	int T[100], n, k;

	cout << "Longitud del arreglo \n";
	cin >> n;
	LeerArr(T,n);
	cout << "Divisor (k) \n";
	cin >> k;
	cout << "Arreglo T ";
	EscribirArr(T,n);
	TdivK(T,k,n);
	

	return 0;
}



