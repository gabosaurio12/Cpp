#include <iostream>
using namespace std;

int digitosEntero(int n){
	if (n < 10)
		return 1;
	else
		return 1 + digitosEntero(n / 10);
}

int main(){
	int n;
	cin >> n;
	cout << digitosEntero(n) << endl;
	return 0;
}