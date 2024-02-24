#include <iostream>
using namespace std;

int main(){
	int a,b,c,d, arr[10000], cont;


	a = 2;
	b = 0;
	c = 2;
	d = 4;

	cont = 0;

	for(a; a <5; a++){
		for(b; b < 10; b++){
			for(c; c < 10; c++){
				for(d; d < 10; d++){
					int suma = 0;
					suma = a + b + c + d;
					if(suma == 13){
						arr[cont] = a;
						cont ++;
						arr[cont] = b;
						cont ++;
						arr[cont] = c;
						cont ++;
						arr[cont] = d;
						cont++;
					}
				}
				d = 0;
			}
			c = 0;
		}
		b = 0;
	}

	for(int i = 0; i < 401; i++){
		cout << arr[i] << arr[i+1] << arr[i+2] << arr[i+3] << "\n";
	}

	return 0;


}