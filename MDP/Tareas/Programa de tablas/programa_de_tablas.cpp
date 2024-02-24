	#include <iostream>
using namespace std;
int main () {
	int t;
	t = 10;

	for (int i = 2; i <= t; i++){
		cout << "\n";
		cout << "Tabla del " << i << "\n";
		
		for (int c = 1; c <= t; c++){

			cout << i << " x " << c << " = " << i*c << "\n";
		}
	}
	return 0;
}