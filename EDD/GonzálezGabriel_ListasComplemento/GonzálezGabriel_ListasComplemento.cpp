#include <iostream>

using namespace std;

struct nodo{
	int valor;
	nodo *sig;	
};

nodo* crearNodo (int dato) {
	nodo *ap = new nodo;
	ap -> valor = dato;
	ap -> sig = NULL;
	return ap;
}

bool estaVacia (nodo *cabeza) {
	if (cabeza == NULL)
		return true;
	else
		return false;
}

int buscar(nodo *n, int busqueda){
	int c = 1;
	while (n != NULL){
		if (n -> valor == busqueda)
			return c;
		else{
			c++;
			n = n -> sig;
		}
	}
	return -1;
}

void eliminarNodo(nodo *&n, int dato) {
	nodo *actual = n;
	nodo *anterior = NULL;
	nodo *aux = n;

	while (aux != NULL){
		actual = aux;
		aux = aux -> sig;

		if (actual -> valor == dato){
			if (anterior != NULL)
				anterior -> sig = actual -> sig;
			else
				n = actual -> sig;

			delete actual;
		}
		anterior = actual;
	}
}

void insertarRecursivo(nodo *&n, int dato) {
	if (estaVacia(n)){
		n = crearNodo(dato);
	}

	else if (n -> sig == NULL){
		n -> sig = crearNodo(dato);
	}
	else
		insertarRecursivo(n -> sig, dato);
}

void insertarOrdenado(nodo *&n, int dato) {
	if (estaVacia(n))
		n = crearNodo(dato);
	
	else{
		int band = 1;
		while (n -> valor < dato){
			n = n -> sig;
		}

		nodo *ap = new nodo;
		ap -> valor = dato;
		ap -> sig = n;
		n = ap;
	}
}

void insOrdRec(nodo *&n, int dato) {
	if (estaVacia(n)){
		n = crearNodo(dato);
	}
	else{
		if (n -> valor >= dato){
			nodo *ap = new nodo;
			ap -> valor = dato;
			ap -> sig = n;
			n = ap;
		}
		else
			insOrdRec(n -> sig, dato);
	}
}

void imprimirRecursivo(nodo *n) {
	while (n != NULL){
		cout << n -> valor << " -> ";
		n = n -> sig;
	}
}

void modificar(nodo *sig, int pos, int nValor){
	int band = 0;
    int cont = 1;
	while (sig != NULL && !band){
		if (cont == pos){
			sig -> valor = nValor;
			band = 1;
		}
		else{
            cont++;
			sig = sig -> sig;
		}
	}
}

void eliminarDuplicados(nodo *&l1, nodo *&l2) {
	nodo *actualL1 = l1;
	nodo *auxL1 = l1;
	nodo *anteriorL1 = NULL;
	nodo *actualL2 = l2;
	nodo *auxL2 = l2;
	nodo *anteriorL2 = NULL;

	while (auxL1 != NULL) {
		actualL1 = auxL1;
		auxL1 = auxL1->sig;
		nodo *borrarActual1 = actualL1;

		auxL2 = l2;
		while (auxL2 != NULL) {
			actualL2 = auxL2;
			auxL2 = auxL2->sig;
			nodo *borrarActual2 = actualL2;

			if (actualL1->valor == actualL2->valor) {
				if (anteriorL1 != NULL){
					anteriorL1->sig = actualL1->sig;
					actualL1 = actualL1->sig;
				}
				else{
					l1 = actualL1->sig;
					actualL1 = actualL1->sig;
				}

				delete borrarActual1;

				if (anteriorL2 != NULL){
					anteriorL2->sig = actualL2->sig;
					actualL2 = actualL2->sig;
				}
				else{
					l2 = actualL2->sig;
					actualL2 = actualL2->sig;
				}

				delete borrarActual2;
			}
			anteriorL2 = actualL2;
		}

		anteriorL1 = actualL1;
	}
}

int main(){
	//buscar

	nodo *cabeza = NULL;

	int nd;
	cout << "Cuantos datos vas a ingresar? ";
	cin >> nd;

	for (int i = 0; i < nd; i++){
		int dato;
		cout << "Ingresa el dato ";
		cin >> dato;
		insertarRecursivo(cabeza, dato);
	}

	imprimirRecursivo(cabeza);

	int db;
	cout << "\nQue dato quieres buscar? ";
	cin >> db;

	int pos = buscar(cabeza, db);

	if (!pos)
		cout << "Tu dato no se encontro \n";
	else
		cout << "Tu dato esta en la posicion " << pos << "\n";

	//eliminar

	cout << "Ingresa el dato que quieres eliminar ";
	int dBorrar;
	cin >> dBorrar;

	eliminarNodo(cabeza, dBorrar);

	cout << "\n";

	imprimirRecursivo(cabeza);

	//insertar ordenado

	nodo *cabeza2 = NULL;

	int nd2;
	cout << "Cuantos datos vas a ingresar? ";
	cin >> nd2;

	for (int i = 0; i < nd; i++){
		int dato;
		cout << "Ingresa el dato ";
		cin >> dato;
		insertarOrdenado(cabeza2, dato);
	}


	int nd3;
	cout << "Cuantos datos vas a ingresar? ";
	cin >> nd3;

	for (int i = 0; i < nd; i++){
		int dato;
		cout << "Ingresa el dato ";
		cin >> dato;
		insOrdRec(cabeza2, dato);
	}

	//modificar
	imprimirRecursivo(cabeza2);
	int posModificar, nuevoValor;
    cout << "Ingresa la posicion del valor que quieres modificar ";
    cin >> posModificar;
    cout << "Ingresa el valor nuevo ";
    cin >> nuevoValor;

    modificar(cabeza2, posModificar, nuevoValor);

    imprimirRecursivo(cabeza2);

    //eliminar duplicados de dos listas, solo elimina una ocurrencia, no pude resolverlo

    cout << "Lista 1 \n";
    imprimirRecursivo(cabeza);
    cout << "Lista 2 \n";
    imprimirRecursivo(cabeza2);
    cout << "\n";

    eliminarDuplicados(cabeza, cabeza2);

    cout << "Datos eliminados \n";

    cout << "Lista 1 \n";
    imprimirRecursivo(cabeza);
    cout << "Lista 2 \n";
    imprimirRecursivo(cabeza2);
    cout << "\n";

	return 0;
}