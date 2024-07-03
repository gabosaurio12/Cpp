#include <iostream>
#include <string>

using namespace std;

void imprimirN(string cad, int n){
    for (int i = 0; i < n; i++){
	cout << cad << " ";
    }
    cout << endl;
}

int main(){
    int nI;
    string palabra;
    cout << "Ingresa la palabra y luego las veces que quieres que se imprima \n";
    cin >> palabra >> nI;
    imprimirN(palabra,nI);
    return 0;
}
