#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float a, b, c;

	cout << "Ingresa un cateto \n";
	cin >> a;
	cout << "Ingresa otro cateto \n";
	cin >> b;

	c = sqrt((a*a) + (b*b));
	cout << "La hipotenusa es: " << c << endl;

	return 0;
}
