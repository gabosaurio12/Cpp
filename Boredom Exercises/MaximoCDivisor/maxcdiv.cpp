#include <iostream>

using namespace std;

int mcd(int n){
	int i = 2;
	int multi = 1;
	while (n < 1){
		int modulo = n % i;
		if (modulo == 0){
			multi = multi * i;
			n = n / i;
		}
		else{
			i++;
		}
	}

	return multi;

}

int main(){
	cout << mcd(12) << endl;
	
}
