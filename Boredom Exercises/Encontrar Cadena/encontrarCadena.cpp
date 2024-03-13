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
        string inicio = "";
        for(int i = 0; i < pos; i++)
                inicio = inicio + cad[i];
        
        return inicio;  
}


string finCad(int pos, string cad){
        int i = pos;
        string fin = "";

        while(cad[i] != '\0'){
                fin = fin + cad[i];
                i++;
        }
        return fin;
}


string insertar(string add, int pos, string cadena){
        if(pos < 1){
                string final = finCad(pos,cadena);
                cadena = add + final;
        }
        else{
                string inicio = iniCad(pos,cadena);
                if(pos > 0){
                        string final = finCad(pos,cadena);
                        cadena = inicio + add + final;
                }
                else
                        cadena = inicio + add;
        }

        return cadena;
}


void encontrarCad(string cadI, string cadB){
        int longCadI = longitudCad(cadI);       int band = 1;
        for(int i = 0; i < longCadI-1; i++){
                if(cadI[i] == cadB[0]){
                        band = 1;
                        int j = 1;      int k = i + 1;  int longCadB = longitudCad(cadB);

                        while(band && j < longCadB){
                                if(cadI[k] != cadB[j]){
                                        band = 0;
                                }
                                k++;
                                j++;
                        }

                        if(band){
                                string cadp1 = insertar("*",i,cadI);
                                string cadp2 = insertar("*",k+1,cadp1);
                                cout << cadp2 << endl;
                        }       
                }
        }

        if(not band)
                cout << "No se encontro la Cadena Buscada \n";
}

int main(){
        string cad1, cad2;
        
        cout << "Ingresa la Cadena Base y la Cadena que quieres Buscar \n";
        cout << "Cadena Base "; 
        getline(cin, cad1);
        cout << "Cadena a Buscar ";
        getline(cin, cad2);

        encontrarCad(cad1,cad2);

        return 0;
}
