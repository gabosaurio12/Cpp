#include <iostream>

using namespace std;

void factPrimos(int n){
	int nb = n;
	int i = 2;

	while (nb>1){
		if (nb%i == 0){
			cout << i << " ";
			nb = nb/i;
		}
		else{
			i++;
		}
	}
}

int main (){
	int n;

	cout << "Ingresa un numero: \n";
	cin >> n;
	factPrimos(n);
}
