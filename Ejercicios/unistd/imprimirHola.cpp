#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

int main() {
	char c = '*';
	int con = 0;
	
	for (int i = 11; i > 0; i-=2) {
		for (int j = 0; j < con; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << c;
			cout.flush();
			usleep(125000);
		}
		cout << "\n";
		con++;
	}

	return 0;
}