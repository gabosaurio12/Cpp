#include <iostream>
using namespace std;

int exponente(int b, int e){
	if (e == 1)
		return b;
	else
		return b * exponente(b,e-1);
}

int main(){
	int b,e;
	cin >> b >> e;
	if (e == 0)
		cout << 1;
	else
		cout << exponente(b,e);
	return 0;
}