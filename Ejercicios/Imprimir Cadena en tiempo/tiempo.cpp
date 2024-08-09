#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

int main() {
	cout << "Ingresa la cadena ";
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << "\n";
		this_thread::sleep_for(chrono::seconds(1/2));
	}

	return 0;
}