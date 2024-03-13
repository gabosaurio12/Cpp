#include <iostream>
#include <string>

using namespace std;

struct departamento{
	string nombre_depto;
	string puesto;
};

struct empleado{
	string nombre;
	string paterno;
	string materno;
	string celular:
	string direccion;
	departamento depto;
	float salario;
};


int main(){
	empleado arr_emp[];

	for (int i = 0; i < 5; i++){
			cout << "Dime el nombre del empleado ";
			cin >> arr_emp[i].nombre;
	}
	arr_emp[3].depto.puesto = "empleado";

	cout << "EL NOMBRE Y PUESTO del empleado 4 son: \n";
    cout << arr_emp[3].nombre << " " << arr_emp[3].depto.puesto << "\n";
	cout << "Presione una tecla para continuar...";
	getchar();
	int var;
	cin >> var;
	return EXIT_SUCCESS;

	return 0
}
