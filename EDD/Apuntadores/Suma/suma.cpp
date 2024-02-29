#include <iostream>

using namespace std;

long suma(int a[], int n){
	int *p;
	p = a;
	int rSuma = 0;
	for (int i = 0; i < n; i++){
		rSuma += *p;
		p++;
	}
	return rSuma;
}

int main(){
	int n = 4;	int a[4];
	a[0] = 5;	a[1] = 4;	a[2] = 1;	a[3] = 2;
	cout << suma(a,n) << endl;
	return 0;
}
