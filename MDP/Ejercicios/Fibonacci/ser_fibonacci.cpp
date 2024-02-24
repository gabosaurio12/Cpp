#include <iostream>
using namespace std;
int main (){
	long long f1, f2, n;
	int i;

	f1 = 1;
	f2 = 1;

	cout << "1 " << f1 << endl;
	cout << "2 " << f2 << endl;

	i = 3;
	do{
		n = f2 + f1;
		cout << i << " " << n << "\n";
		f2 = f1;
		f1 = n;
		i ++;
	} while (i <= 100);
	return 0;

}