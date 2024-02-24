#include <iostream>
using namespace std;
int main (){
	//declaracion de variables
	int da, ma, aa, dn, mn, an, a_cumplidos, no_cumplidos;
	
	//menu de inicio
	cout <<"Programa que calcula tu edad \n";
	cout <<"Ingresa el dia de hoy dd \n";
	cin >> da;
	cout <<"Ingresa el mes actual mm \n";
	cin >> ma;
	cout <<"Ingresa el ano actual aaaa \n";
	cin >> aa;
	
	cout <<"Ingresa el dia que naciste dd \n";
	cin >> dn;
	cout <<"Ingresa tu mes de nacimiento mm \n";
	cin >> mn;
	cout <<"Ingresa tu ano de nacimiento aaaa \n";
	cin >> an;
			
	//calculando años
	a_cumplidos = aa - an;  // años cumplidos
	no_cumplidos = a_cumplidos -1;  // años no cumplidos
	
	//calculando e imprimiendo la edad
	
	if (a_cumplidos <= -1 || no_cumplidos < 0){
		cout << "Aun no naces! O acabas de nacer? \n";
	}
	
	else {
		if (ma > mn){
			cout << a_cumplidos;
		}
		
		else{
			if (ma < mn){
				cout << no_cumplidos;
			}
			else {
				if (ma = mn){
					if (da <= dn){
						cout << no_cumplidos;
					}
					else {
						cout << a_cumplidos;
					}	
				}
			}		
		}	
		
	}
		
		
	return 0;
}
