#include <iostream>
using namespace std;
int main (){
	int limite = 1;

	for (int contador_1 = 20; contador_1 >= limite; contador_1--){
		for (int contador_2 = 20; contador_2 >= contador_1; contador_2--){
			cout << contador_1;
		}
		cout << endl;
	}
	return 0;
}