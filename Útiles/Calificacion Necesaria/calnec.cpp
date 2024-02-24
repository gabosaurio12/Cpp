#include <iostream>

using namespace std;

int main(){
	float cal1, cal2, cal3;
	cout << "Ingresa la calificacion del primer parcial \n";
	cin >> cal1;
	cout << "Ingresa la calificacion del segundo parcial \n";
	cin >> cal2;

	cal3 = 18 - (cal1 + cal2);
	if (cal3 > 10){
		cout << "Es imposible hermano, Dios te bendiga \n";
	}
	else{
		cout << "Debes sacar como minimo: " << cal3 << endl;
		cout << "Tu promedio final sera 6 como minimo \n";
	}
	
	
	return 0;
}
