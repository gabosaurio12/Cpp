#include <iostream>

using namespace std;

void serieDec(int n){
	if(n == 1)
		cout << 1;
	else{
		cout << n << " ";
		serieDec(n - 1);
	}
}

void imprimeSerieNa1(int n){
	if(n > 0){
		cout << n << ' ';
		imprimeSerieNa1(n - 1);
	}
}

int main(){
	int n;
	cout << "Ingresa n ";	cin >> n;

	serieDec(n);

	cout << endl;

	cout << "Correccion \n";
	imprimeSerieNa1(n);

	return 0;
}