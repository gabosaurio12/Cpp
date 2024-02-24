#include <iostream>

using namespace std;

long aBin(int n){
	int c = n;
	long b = 0;
	int i = 1;

	while (c>0){
		b = b + (c%2) * i;
		i = i*10;
		c = c/2;
	}
	return b;
}

int main(){
	int n;
	cout << "Escribe un numero \n";
	cin >> n;
	
	cout << aBin(n) << endl;
	return 0;
}