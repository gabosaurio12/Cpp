#include <iostream>
using namespace std;
int main() {
    //declaracion de variables
    float a, b, c, suma, na, prom;
    suma = 0;
    na = 0;
    cout << "Promeido de 3 calificaciones \n";
    cout << "Escribe las 3 calificaciones \n";
    cin >> a;
    cin >> b;
    cin >> c;
    
    //ifs
    if (a >= 6){
        suma = suma + a;
        na = na + 1;
    }
    
    if (b >= 6){
        suma = suma + b;
        na = na + 1;
    }
    
    if (c >= 6){
        suma = suma + c;
        na = na + 1;
    
    }
    
    //promedio
    prom = suma / na;
    
    if (prom<6){
    	cout << "El promedio no llega a 6 \n";
	}
	
	else {
		cout << "El promedio es: " << prom;	
	}
    
    
    return 0;
}
