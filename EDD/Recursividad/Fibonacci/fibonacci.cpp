#include <iostream>

using namespace std;

unsigned long fibonacci(int n){
	if(n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n;
	cout << "Ingresa n ";	cin >> n;
	cout << fibonacci(n) << '\n';

	return 0;
}