#include <iostream>

using namespace std;

void fizzbuzz(int i){
	int fizz, buzz;

	fizz = i%3;
	buzz = i%5;

	if (fizz != 0 && buzz != 0){
		cout << i << endl;
	}
	else{
		if (fizz == 0 && buzz == 0){
			cout << "FIZZBUZZ! \n";
		}
		else{
			if (fizz == 0){
				cout << "Fizz! \n";
			}
			else{
				cout << "Buzz! \n";
			}
		}
	}
}

int main(){
	for (int i = 1; i <= 100; i++){
		fizzbuzz(i);		
	}

	return 0;
}
