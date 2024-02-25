#include <iostream>
#include <string>

using namespace std;

int longitudCad(string cad){
	int i = 0;
	while(cad[i] != '\0')
		i++;

	return i;
}


string iniCad(int pos, string cad){
	cad inicio = "";
	for(int i = 0; i < pos; i++)
		inicio = inicio + cad[i];
	
	return inicio;	
}


string finCad(int pos, string cad){
	int i = pos;	cad fin = "";
	while(cad[i] != '\0'){
		fin = fin + cad[i];
		i++;
	}
	return fin;
}


void insertar(string add, int pos, string cadena){
	if(pos < 1){
		string final = finCad(pos,cadena);
		cadena = add + final;
	}
	else{
		string inicio = inicioCad(pos,cadena);
		if(pos > )
	}
}


void encontrarCad(string cadI, string cadB){
	int longCadI = longitudCad(cadI);	int band = 1;
	for(int i = 0; i < longCadI-1; i++){
		if(cadI[i] == cadB[0]){
			band = 1;
			int j = 1;	int k = i + 1;	int longCadB = longitudCad(cadB);

			while(band && j < longCadB){
				if(cadI[k] != cadB[j]){
					band = 0;
				}
				k++;
				j++;
			}

			if(band){
				/*insertar('*',i,cadI);
				insertar('*',k+1,cadI);
				*/
				cout << cadI << endl;
			}	
		}
	}

	if(not band)
		cout << "No se encontro la Cadena Buscada \n";
}

int main(){
	string cad1, cad2;
	
	cout << "Ingresa la Cadena Base y la Cadena que quieres Buscar \n";
	cin >> cad1 >> cad2;

	encontrarCad(cad1,cad2);

	return 0;
}