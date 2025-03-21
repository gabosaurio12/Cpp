#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string generarCurp (string nombre, string primerApellido, string segundoApellido, string dia, string mes, string ano, string sexo, string entidad){

	string siglasNombre = primerApellido.substr(0,2) +
        segundoApellido.substr(0,1) +
        nombre.substr(0,1) +
        ano.substr(2,3) +
        mes +
        dia +
        sexo +
        entidad.substr(0,2);

	return siglasNombre;
}

int main(){
    string nombre, primerApellido, segundoApellido, dia, mes, ano, entidad, curp, sexo;

	cout << "Ingresa tu nombre (solo primer nombre) \n";
	cin >> nombre;
	transform(nombre.begin(), nombre.end(), nombre.begin(), ::toupper);

	cout << "Ingresa tu primer apellido \n";
	cin >> primerApellido;
	transform(primerApellido.begin(), primerApellido.end(), primerApellido.begin(), ::toupper);
	
	cout << "Ingresa tu segundo apellido \n";
	cin >> segundoApellido;
	transform(segundoApellido.begin(), segundoApellido.end(), segundoApellido.begin(), ::toupper);

	cout << "Ingresa tu dia de nacimiento dd \n";
	cin >> dia;
	cout << "Ingresa el mes de tu nacimiento mm \n";
	cin >> mes;
	cout << "Ingresa el ano de tu nacimiento aaaa \n";
	cin >> ano;

	cout << "Ingresa tu sexo H/M \n";
	cin >> sexo;
	transform(sexo.begin(), sexo.end(), sexo.begin(), ::toupper);

	cout << "Ingresa la entidad en la que naciste \n";
	cin >> entidad;
	transform(entidad.begin(), entidad.end(), entidad.begin(), ::toupper);

    String curp = generarCurp(nombre, primerApellido, segundoApellido, dia, mes, ano, sexo, entidad);

	cout << curp << endl;

	return 0;
}
