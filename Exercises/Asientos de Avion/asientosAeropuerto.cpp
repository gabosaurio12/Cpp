#include <iostream>
#include <string>

using namespace std;

void pantallaPrincipal(){
    cout << "\t Vuelo 420 \n";
    cout << "\t Bienvenido \n\n";
}

void llenado(int mA[][5]){
    mA[0][0] = 126;

    int l = 65;
    for (int i = 1; i < 8; i++){
        mA[i][0] = l;
        l++;
    }

    int n = 49;
    for (int i = 1; i < 5; i++){
        mA[0][i] = n;
        n++;
    }

    for (int i = 1; i < 8; i++){
        for (int j = 1; j < 5; j++){
            mA[i][j] = 76;
        }
    }
}

void imprimirAsientos(int mA[][5]){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 5; j++){
            if (j == 3){
                cout << "\t";
            }
            cout << " " << char(mA[i][j]) << " ";
        }
        cout << "\n";
    }
}

void mayus(string &s){
    int c = int(s[0]);
    c -= 32;
    s[0] = char(c);
}

int validar(string &asiento){
    char l = int(asiento[0]);
    char n = int(asiento[1]);

    if (l > 64 && l < 72){
        if (n > 48 && n < 53)
            return 1;
        else
            return 0;
    }

    else{
        if (l > 96 && l < 104){
            if (n > 48 && n < 53){
                mayus(asiento);
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
}

string leerAsiento(){
    string asiento;
    cin >> asiento;

    if (asiento == "s" || asiento == "S")
        return "s";
    
    return asiento;
}

int apartar(int mA[][5], string asAp){
    int l = int(asAp[0]) - 64;
    int n = int(asAp[1]) - 48;

    if (mA[l][n] == 79){
        cout << "Ingresa un asiento vacio O ingresa 's' para salir \n";
        asAp = leerAsiento();

        if (asAp == "s" || asAp == "S")
            return 0;
        else{
            while (!validar(asAp)){
                cout << "Ingresa un asiento valido \n";
                asAp = leerAsiento();
            }
            
            return apartar(mA, asAp); 
        }
    }

    else{
        mA[l][n] = 79;
        return 1;
    }
}

int main(){
    int matAsientos[8][5];

    pantallaPrincipal();

    llenado(matAsientos);
    imprimirAsientos(matAsientos);

    int band = 1;
    int c = 0;
    while (band){

        string asientoAp;
        cout << "\nIngresa el asiento que deseas apartar \n";
        cout << "Para salir ingresa 's' \n";
        asientoAp = leerAsiento();

        if (asientoAp == "s"){
            return 0;
        }
        
        if (validar(asientoAp)){
            if (apartar(matAsientos, asientoAp)){
                cout << "\nTu asiento ha sido apartado exitosamente \n\n";
                imprimirAsientos(matAsientos);
                c++;
            }
            else
                return 0;

            if (c == 28){
                cout << "\nl vuelo esta lleno \n";
                return 0;
            }
            else{
                string sn;
                cout << "\nDeseas leer otro asiento? s/n \n";
                cin >> sn;
                if (sn == "n" || sn == "N")
                    band = 0;
                else
                    cout << "Se leera un nuevo asiento \n";
            }   
        }
        else
            cout << "Asiento invalido \n";
    }
    
    return 0;
}
