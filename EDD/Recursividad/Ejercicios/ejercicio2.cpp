#include <iostream>

using namespace std;

void serieAum(int n){
	if(n == 100)
		cout << 100;
	else{
		cout << n << " ";
		serieAum(n + 1);
	}
}

void imprimeTo100(int n){
	if(n > 0){
		cout << n << ' ';
		imprimeTo100(n + 1);
	}
}

int main(){
	int n;
	cout << "Ingresa n ";	cin >> n;

	serieAum(n);

	cout << endl;

	cout << "Correccion \n";
	imprime1aN(n);

	return 0;
}