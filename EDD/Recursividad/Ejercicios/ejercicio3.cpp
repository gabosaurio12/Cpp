#include <iostream>

using namespace std;

void contador(int c, int n){
	if(c == n)
		cout << c;
	else{
		cout << c << " ";
		contador(c + 1,n);
	}
}

int main(){
	int n;	int c = 1;
	cout << "Ingresa n ";	cin >> n;

	contador(c,n);

	cout << endl;

	return 0;
}