#include <iostream>
#include <string>

using namespace std;

struct empleado{
	string nombre;
	string apellidoMaterno;
	string apellidoPaterno;
	string direccion;
	string telefonoCel;
	string puesto;
	float salario;
};

void escribirEmpleado (empleado arr[], int i){
	cout << "Nombre " << arr[i].nombre << endl;
	cout << "Apellido Materno " << arr[i].apellidoMaterno << endl;
	cout << "Apellido Paterno " << arr[i].apellidoPaterno << endl;
	cout << "Direccion " << arr[i].direccion << endl;
	cout << "Telefono " << arr[i].telefonoCel << endl;
	cout << "Puesto " << arr[i].puesto << endl;
	cout << "Salario " << arr[i].salario << endl;
}

void borrarEmpleado (empleado arr[], int i){
	arr[i].nombre = '\0';
	arr[i].apellidoMaterno = '\0';
	arr[i].apellidoPaterno = '\0';
	arr[i].direccion = '\0';
	arr[i].telefonoCel = '\0';
	arr[i].puesto = '\0';
	arr[i].salario = 0;
	cout << "Usuario eliminado \n";
}

void insertar (empleado *pu){
	cout << "Nombre ";	getline(cin, *pu.nombre);
	*pu->nombre = "juan";
	cout << "Apellido Materno ";	getline(cin, *pu.apellidoMaterno);
	cout << "Apellido Paterno ";	getline(cin, *pu.apellidoPaterno);
	cout << "Direccion ";	getline(cin, *pu.direccion);
	cout << "Telefono Celular ";	getline(cin, *pu.telefonoCel);
	cout << "Puesto ";	getline(cin, *pu.puesto);
	cout << "Salario ";	cin >> *pu.salario;
	pu++;
}

void buscar (empleado arr[], string nombre, string apeMat, string apePat){
    for (int i = 0; i < 100; i++){
    	if (arr[i].nombre == nombre){
    		if (arr[i].apellidoMaterno == apeMat){
    			if (arr[i].apellidoPaterno == apePat){
    				char opc;
    				escribirEmpleado(arr,i);
    				cout << "Quieres borrarlo? s/n ";	cin >> opc;
    				if (opc == 's')
    					borrarEmpleado(arr,i);
    			}
    			else
    				cout << "No se encontro el empleado\n";
    		}
    		else
    			cout << "No se encontro el empleado\n";
    	}
    	else
    		cout << "No se encontro el empleado\n";
    }
}

int main(){
	empleado arrEmpleados[100];	empleado *p = arrEmpleados;
	int opc;
	cout << "Que quiere hacer? \n";
	cout << "1. Insertar Empleado \n2. Buscar Empleado \n3. Salir";
	cin >> opc;
	string nombre, apeMat, apePat;
	switch (opc){
		case 1:
			insertar(p);
			break;
		
		case 2:
			cout << "Nombre ";	getline(cin, nombre);
			cout << "Apellido Materno ";	getline(cin, apeMat);
			cout << "Apellido Paterno ";	getline(cin, apePat);
			buscar(arrEmpleados,nombre,apeMat,apePat);
			break;
		
		case 3:
			return 0;
	}

	return 0;
}