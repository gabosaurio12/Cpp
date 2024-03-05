#include <iostream>

struct alumno{
	string nombre;
	int calif;
};

int main(){
	alumno a;
	a.calif = 8;
	a.nombre = "Juan";
	cout << a.nombre << " tiene calificacion de " << a.calif << endl;
	getchar();
	cout << "Presione una tecla para continuar . . .";

	return 0;
}
