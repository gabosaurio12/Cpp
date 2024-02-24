#include <iostream>
#include <string>

using namespace std;

struct fecha{
    int d;
    int m;
    int a;
};

struct alumno{
    string matricula;
    string nombre;
    int calificacion;
    fecha fecha_nac;
};

int yearsold(alumno al1, fecha actual){
    int edad = actual.a - al1.fecha_nac.a;
    if (actual.m < al1.fecha_nac.m){
        return edad - 1;
    }
    if (actual.m == al1.fecha_nac.m && actual.d > al1.fecha_nac.d){
        return edad - 1;
    }
    return edad;

}

int main(){
    int anioscum;
    alumno al;
    fecha fecha_act;
    cout << "PRUEBAAAA";
    cout << "Matricula \n";
    getline(cin, al.matricula);
    cout << "Nombre \n";
    getline(cin, al.nombre);
    cout << "Calificacion \n";
    cin >> al.calificacion;
    cout << "Fecha de nacimiento dd/mm/aaaa \n";
    cin >> al.fecha_nac.d >> al.fecha_nac.m >> al.fecha_nac.a;

    cout << "Fecha actual \n";
    cin >> fecha_act.d >> fecha_act.m >> fecha_act.a;

    anioscum = yearsold(al,fecha_act);
    cout << anioscum << endl;
    
    return 0;
}
