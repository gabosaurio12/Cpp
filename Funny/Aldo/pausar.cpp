#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void pausar(float segundos) {
    this_thread::sleep_for(chrono::milliseconds((int)(segundos * 1000)));
}

int main(){
    string cadena;
    cout << "Ingresa una palabra ";
    cin >> cadena;
    string concatenar = "";

    int i = 0; 
    while ( cadena[i] != '\0' ){
        int j = 97;
        char letra = j;
        while ( letra != cadena[i] ){
            concatenar[i] = letra;
            cout << concatenar << letra << endl;
            cout.flush();
            pausar(0.05);
            j++;
            letra = j;
               if ( cadena[i] == ' ' ){
                concatenar += ' ';
                i++;
            }
        }
        concatenar+=letra;
        cout << concatenar << endl;
     
        i++;
    }

    return 0;
}