#include <iostream>

using namespace std;

long factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int main(){
	int n;
	cout << "INGRESA N: ";
	cin >> n;
	cout << factorial(n) << '\n';

	return 0;
}