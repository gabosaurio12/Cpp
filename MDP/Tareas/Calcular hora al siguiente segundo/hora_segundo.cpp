#include <iostream>
using namespace std;
int main (){
	//declaramos variables
	int h, m, s;
    cout << "Programa qye calcula la hora dentro de un segundo \n";
    cout << "Ingresa la hora \n";
    cin >> h;
    cout << "Ingresa el minuto \n";
    cin >> m;
    cout << "Ingresa el segundo \n";
    cin >> s;
    
    //Por si se meten datos erroneos
    if (h >= 24 || m >= 60 || s >= 60) {
    	cout << "Introduce un valor valido";
	}
    else {
	    //calculamos la hora
	    if (s < 59) {
	        s = s + 1;
	    }
	    else {
	        s = 0;
		    if (m < 59) {
		        m = m + 1;
		    }
		    else {
		        m = 0;
			    
				if (h < 23) {
			        h = h + 1;
			    }
			    else {
			        h = 0;
			    }
		    }
	    }
	    	
	    cout << h << " : " << m << " : " << s ;
	}
	
	return 0;
	
}
