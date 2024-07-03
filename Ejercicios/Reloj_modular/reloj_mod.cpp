#include <iostream>

using namespace std;

bool hora (int h){
	bool banhora;
	banhora = true;
	if (h>23){
		banhora = false;
	}
	return banhora;
}

bool minuto (int m){
	bool banmin;
	banmin = true;
	if (m>=59){
		banmin = false;
	}
	return banmin;
}

bool segundo (int s){
	bool banseg;
	banseg = true;
	if (s>=59){
		banseg = false;
	}
	return banseg;
}

int main (){
	int h, m, s;
	cout << "Ingresa la hora \n";
	cin >> h;
	cout << "Ingresa el minuto \n";
	cin >> m;
	cout << "Ingresa el segundo \n";
	cin >> s;

	if (segundo(s) == false){
		s = 0;
		m = m+1;
	}
	else{
		s++;
	}
	if (minuto(m) == false){
		m = 0;
		h++;
	}
	if (hora(h) == false){
		h = 0;
	}
	cout << h << " : " << m << " : " << s << endl;

	return 0;
}
