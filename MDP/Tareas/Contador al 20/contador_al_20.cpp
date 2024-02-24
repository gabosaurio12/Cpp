#include <iostream>
using namespace std;
int main (){
	int limite = 20;

	for (int contador_1 = 1; contador_1 <= limite; contador_1++){
		
		for (int contador_2 = 1; contador_2 <= contador_1; contador_2++){
			cout << contador_1;
		}
		cout << endl;
	}
	return 0;
}