#include <iostream>

using namespace std;

int division(int a, int b) {
	int c = 1;
	int auxb = b;
	int band = 1;
	while (band){
		if (auxb <= a - b){
			auxb += b;
			c++;
		}
		else
			band = 0;
	}

	return c;
}

int cosiente(int a, int b) {
	if (a > 9 && a < 100){
		int auxa = a / 10;
		int cos1 = division(auxa, b);

		auxa = a % 10;
		int cos2 = division(auxa, b);

		int cos = (cos1 * 10) + cos2;

		return cos;
	}
    else{
        return division(a, b);
    }

}

int main(){
    int a, b;
    cout << "Ingresa A ";
    cin >> a;
    cout << "Ingresa B ";
    cin >> b;

	cout << cosiente(a, b);


	return 0;
}
