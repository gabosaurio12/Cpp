#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string generarcurp (string primer_nom, string primer_ap, string segundo_ap, string dn, string mn, string an, string sexo, string entidad){
	string cuatro_letras;

	cuatro_letras = primer_ap.substr(0,2) + segundo_ap.substr(0,1) + primer_nom.substr(0,1) + an.substr(3,4) + mn + dn + sexo + entidad.substr(0,2); 
	return cuatro_letras;
}

int main(){
	string primer_nom, primer_ap, segundo_ap, dn, mn, an, entidad,curp, sexo;

	cout << "Ingresa tu nombre (solo primer nombre) \n";
	cin >> primer_nom;
	transform(primer_nom.begin(), primer_nom.end(), primer_nom.begin(), ::toupper);

	cout << "Ingresa tu primer apellido \n";
	cin >> primer_ap;
	transform(primer_ap.begin(), primer_ap.end(), primer_ap.begin(), ::toupper);
	
	cout << "Ingresa tu segundo apellido \n";
	cin >> segundo_ap;
	transform(segundo_ap.begin(), segundo_ap.end(), segundo_ap.begin(), ::toupper);

	cout << "Ingresa tu dia de nacimiento dd \n";
	cin >> dn;
	cout << "Ingresa el mes de tu nacimiento mm \n";
	cin >> mn;
	cout << "Ingresa el ano de tu nacimiento aaaa \n";
	cin >> an;

	cout << "Ingresa tu sexo H/M \n";
	cin >> sexo;
	transform(sexo.begin(), sexo.end(), sexo.begin(), ::toupper);

	cout << "Ingresa la entidad en la que naciste \n";
	cin >> entidad;
	transform(entidad.begin(), entidad.end(), entidad.begin(), ::toupper);


	curp = generarcurp(primer_nom, primer_ap, segundo_ap, dn, mn, an, sexo, entidad);
	cout << curp << endl;

	return 0;
}