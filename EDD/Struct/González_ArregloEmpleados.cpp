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
	cout << "Nombre: " << arr[i].nombre << "\n";
	cout << "Apellido Paterno: " << arr[i].apellidoPaterno << "\n";
	cout << "Apellido Materno: " << arr[i].apellidoMaterno << "\n";
	cout << "Direccion: " << arr[i].direccion << "\n";
	cout << "Telefono: " << arr[i].telefonoCel << "\n";
	cout << "Puesto: " << arr[i].puesto << "\n";
	cout << "Salario: " << arr[i].salario << "\n";
}

void borrarEmpleado (empleado arr[], int i){
	arr[i].nombre = "";
	arr[i].apellidoMaterno = "";
	arr[i].apellidoPaterno = "";
	arr[i].direccion = "";
	arr[i].telefonoCel = "";
	arr[i].puesto = "";
	arr[i].salario = 0;
	cout << "\nUsuario eliminado \n";
}

void insertar (empleado *pu){
    cout << "\nDatos del Empleado: \n";
	cout << "Nombre: ";
	cin.ignore();
	getline(cin, pu -> nombre);
	cout << "Apellido Paterno: ";	
	getline(cin, pu -> apellidoPaterno);
	cout << "Apellido Materno: ";	
	getline(cin, pu -> apellidoMaterno);
	cout << "Direccion: ";	
	getline(cin, pu -> direccion);
	cout << "Telefono Celular: ";	
	getline(cin, pu -> telefonoCel);
	cout << "Puesto: ";
	getline(cin, pu -> puesto);
	cout << "Salario: ";
	cin >> pu -> salario;
}

void buscar (empleado arr[], string nombre, string apePat, string apeMat){
    int band = 1;
    int i = 0;
    while (band && i < 100){
    	if (arr[i].nombre == nombre){
    		if (arr[i].apellidoPaterno == apePat){
    			if (arr[i].apellidoMaterno == apeMat){
    				char opc;
    				escribirEmpleado(arr,i);
    				cout << "\nQuieres borrarlo? s/n ";
				cin >> opc;
    				if (opc == 's')
    					borrarEmpleado(arr,i);
    			}
    			else
    				band = 0;
    		}
    		else
    			band = 0;
    	}
    	else
    		band = 0;
        i++;
    }

    if (band = 0)
	    cout << "\nNo se encontro\n";   
}

void mostrarEmpleados(empleado arr[]){
    for (int i = 0; i < 100; i++){
		if (arr[i].nombre != ""){
			escribirEmpleado(arr,i);
			cout << "\n";
		}
    }
}

int main(){
	empleado arrEmpleados[100];
    empleado *p = arrEmpleados;
	int opc;
	
	while (opc != 4){
		cout << "\nEMPLEADOS\n";
        cout << "Que quiere hacer? \n";
        cout << "1. Insertar Empleado \n2. Buscar Empleado \n3. Mostrar Empleados\n4. Salir\n";
		cout << "Ingresar opcion ";
        cin >> opc;
        string nombre, apeMat, apePat;
        switch (opc){
            case 1:
                insertar(p);
                p++;
                break;
            
            case 2:
                cout << "\nNombre \n";
                cin.ignore();
                getline(cin, nombre);
                cout << "Apellido Paterno \n";
                getline(cin, apePat);
                cout << "Apellido Materno \n";
                getline(cin, apeMat);
                buscar(arrEmpleados,nombre,apePat,apeMat);
                break;
            
            case 3:
				cout << "\n";
                mostrarEmpleados(arrEmpleados);
                break;
		}
	}

	return 0;
}
