#include <iostream>

using namespace std;

void intercambiar(int &a, int&b) {
	int aux = a;
	a = b;
	b = aux;
}

void menorAmayor(int &a, int &b, int &c) {
	if (a > b)
		intercambiar(a,b);
	if (b > c)
		intercambiar(b,c);
	if (a > b)
		intercambiar(a,b);
}

int main(int argc, char *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;

	menorAmayor(a, b, c);

	cout << a << " " << b << " " << c << "\n";
}