#include <iostream>
#include <string>

using namespace std;

int longitudC(string cad){
    int cont = 0;	int i = 0;
    while (cad[i] != '\0'){
        cont++;
        i ++;
    }
    return cont;
}

string eliminarC(string c, string s){
	int longC = longitudC(c);	int longS = longitudC(s);
	for(int i = 0; i < longS; i++){
		for(int j = 0; j < longC; j++){
			if(s[i] == c[j])
				s[i] = '\0';
		}
	}

	return s;
}

int main(){
	string cad1, cad2;
	cout << "Ingresa la cad base y la cad a eliminar \n";
	getline(cin, cad1);
	getline(cin, cad2);

	cout << eliminarC(cad2,cad1) << endl;

	return 0;
}