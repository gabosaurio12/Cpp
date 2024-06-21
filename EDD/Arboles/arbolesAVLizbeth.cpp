// Arbol AVL en C++
// (C) Mayo 2002, Salvador Pozo
// C con Clase: http://c.conclase.net

#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	int FE;
	Nodo *izquierdo;
	Nodo *derecho;
	Nodo *padre;
};

enum {IZQUIERDO, DERECHO};

bool Vacio(Nodo *r) { return r==NULL; }
// Comprobar si es un nodo hoja:
bool EsHoja(Nodo *r) { return !r->derecho && !r->izquierdo; }
// Devolver referencia al dato del nodo actual:
//int &ValorActual() { return actual->dato; }
// Moverse al nodo raiz:
//void Raiz() { actual = raiz; }

void inorden(Nodo *raiz){
    if (raiz!=NULL){        
        inorden(raiz->izquierdo);
        cout<<" "<<raiz->dato;
        inorden(raiz->derecho);
    }      
}
 
// Funciones de equilibrado:
void Equilibrar(Nodo *nodo, int, bool);
void RSI(Nodo* nodo);
void RSD(Nodo* nodo);
void RDI(Nodo* nodo);
void RDD(Nodo* nodo);
   // Funciones auxiliares
  // void Podar(Nodo* &);
   //void auxContador(Nodo*);
 //  void auxAltura(Nodo*, int);


Nodo* crearNodo(int dat, Nodo *padre){
      Nodo *nodoAux;
      nodoAux=new Nodo;
      nodoAux->derecho=NULL;
      nodoAux->izquierdo=NULL;
      nodoAux->FE=0;      
      nodoAux->padre=padre; 
      nodoAux->dato=dat;   
      return nodoAux;    
}

// Insertar un dato en el �rbol AVL
void Insertar(Nodo *&raiz, int dat) {
   Nodo *padre, *actual = NULL;
   
   actual = raiz;
   // Buscar el dato en el �rbol, manteniendo un apuntador al nodo padre
   while(!Vacio(actual) && dat != actual->dato) {
      padre = actual;
      if(dat > actual->dato) 
        actual = actual->derecho;
      else 
         if(dat < actual->dato) 
            actual = actual->izquierdo;
   }

   // Si se ha encontrado el elemento, regresar sin insertar
   if(!Vacio(actual)) 
        return;
   // Si padre es NULL, entonces el �rbol estaba vac�o, el nuevo nodo ser�
   // el nodo raiz
   if(Vacio(padre)) raiz = new Nodo;
   // Si el dato es menor que el que contiene el nodo padre, lo insertamos
   // en la rama izquierda
   else 
    if(dat < padre->dato) {         
      padre->izquierdo = crearNodo(dat, padre);
      Equilibrar(padre, IZQUIERDO, true);
    }
    // Si el dato es mayor que el que contiene el nodo padre, lo insertamos
    // en la rama derecha
    else 
      if(dat > padre->dato) {
        padre->derecho = crearNodo(dat, padre);
        Equilibrar(padre, DERECHO, true);
   }
}

// Equilibrar �rbol AVL partiendo del nodo nuevo
void Equilibrar(Nodo *nodo, int rama, bool nuevo)
{
   bool salir = false;
   // Recorrer camino inverso actualizando valores de FE:
   while(nodo && !salir) {
      if(nuevo)
         if(rama == IZQUIERDO) nodo->FE--; // Depende de si a�adimos ...
         else                  nodo->FE++;
      else
         if(rama == IZQUIERDO) nodo->FE++; // ... o borramos
         else                  nodo->FE--;
      if(nodo->FE == 0) salir = true; // La altura de las rama que
                                      // empieza en nodo no ha variado,
                                      // salir de Equilibrar
      else if(nodo->FE == -2) { // Rotar a derechas y salir:
         if(nodo->izquierdo->FE == 1) RDD(nodo); // Rotaci�n doble
         else RSD(nodo);                         // Rotaci�n simple
         salir = true;
      }
      else if(nodo->FE == 2) {  // Rotar a izquierdas y salir:
         if(nodo->derecho->FE == -1) RDI(nodo); // Rotaci�n doble
         else 
            RSI(nodo);                        // Rotaci�n simple
         salir = true;
      }
      if(nodo->padre) {
         if(nodo->padre->derecho == nodo) 
            rama = DERECHO; 
         else
            rama = IZQUIERDO;
      }
      nodo = nodo->padre; // Calcular FE, siguiente nodo del camino.
   }   
}

// Rotaci�n doble a derechas
void RDD(Nodo *&raiz,Nodo* nodo)
{
   cout << "RDD" << endl;
   Nodo *Padre = nodo->padre;
   Nodo *P = nodo;
   Nodo *Q = P->izquierdo;
   Nodo *R = Q->derecho;
   Nodo *B = R->izquierdo;
   Nodo *C = R->derecho;

   if(Padre) 
     if(Padre->derecho == nodo) 
        Padre->derecho = R;
     else 
        Padre->izquierdo = R;
   else raiz = R;

   // Reconstruir �rbol:
   Q->derecho = B;
   P->izquierdo = C;
   R->izquierdo = Q;
   R->derecho = P;
   
   // Reasignar padres:
   R->padre = Padre;
   P->padre = Q->padre = R;
   if(B) 
    B->padre = Q;
   if(C) 
    C->padre = P;

   // Ajustar valores de FE:
   switch(R->FE) {
      case -1: Q->FE = 0; P->FE = 1; break;
      case 0:  Q->FE = 0; P->FE = 0; break;
      case 1:  Q->FE = -1; P->FE = 0; break;
   }
   R->FE = 0;
}

// Rotaci�n doble a izquierdas
void RDI(Nodo *&raiz, Nodo* nodo)
{
   cout << "RDI" << endl;
   Nodo *Padre = nodo->padre;
   Nodo *P = nodo;
   Nodo *Q = P->derecho;
   Nodo *R = Q->izquierdo;
   Nodo *B = R->izquierdo;
   Nodo *C = R->derecho;

   if(Padre)
     if(Padre->derecho == nodo) 
        Padre->derecho = R;
     else 
        Padre->izquierdo = R;
   else 
    raiz = R;

   // Reconstruir �rbol:
   P->derecho = B;
   Q->izquierdo = C;
   R->izquierdo = P;
   R->derecho = Q;
   
   // Reasignar padres:
   R->padre = Padre;
   P->padre = Q->padre = R;
   if(B) 
    B->padre = P;
   if(C) 
    C->padre = Q;

   // Ajustar valores de FE:
   switch(R->FE) {
      case -1: P->FE = 0; Q->FE = 1; break;
      case 0:  P->FE = 0; Q->FE = 0; break;
      case 1:  P->FE = -1; Q->FE = 0; break;
   }
   R->FE = 0;
}

// Rotaci�n simple a derechas
void RSD(Nodo *&raiz, Nodo* nodo)
{
   cout << "RSD" << endl;
   Nodo *Padre = nodo->padre;
   Nodo *P = nodo;
   Nodo *Q = P->izquierdo;
   Nodo *B = Q->derecho;

   if(Padre) 
     if(Padre->derecho == P) 
        Padre->derecho = Q;
     else 
        Padre->izquierdo = Q;
   else 
    raiz = Q;

   // Reconstruir �rbol:
   P->izquierdo = B;
   Q->derecho = P;
   
   // Reasignar padres:
   P->padre = Q;
   if(B) 
    B->padre = P;
   Q->padre = Padre;

   // Ajustar valores de FE:
   P->FE = 0;
   Q->FE = 0;
}

// Rotaci�n simple a izquierdas
void RSI(Nodo *&raiz, Nodo* nodo)
{
   cout << "RSI" << endl;
   Nodo *Padre = nodo->padre;
   Nodo *P = nodo;
   Nodo *Q = P->derecho;
   Nodo *B = Q->izquierdo;

   if(Padre) 
     if(Padre->derecho == P) 
        Padre->derecho = Q;
     else 
        Padre->izquierdo = Q;
   else 
    raiz = Q;

   // Reconstruir �rbol:
   P->derecho = B;
   Q->izquierdo = P;
   
   // Reasignar padres:
   P->padre = Q;
   if(B) 
    B->padre = P;
   Q->padre = Padre;
   
   // Ajustar valores de FE:
   P->FE = 0;
   Q->FE = 0;
}

// Eliminar un elemento de un �rbol AVL
void Borrar(Nodo *raiz, int dat)
{
   Nodo *padre = NULL;
   Nodo *nodo, *actual;
   int aux;

   actual = raiz;
   // Mientras sea posible que el valor est� en el �rbol
   while(!Vacio(actual)) {
      if(dat == actual->dato) { // Si el valor est� en el nodo actual
         if(EsHoja(actual)) { // Y si adem�s es un nodo hoja: lo borramos
            if(!padre) {// Si tiene padre (no es el nodo raiz)
               // Anulamos el apuntador que le hace referencia
               if(padre->derecho == actual) 
                    padre->derecho = NULL;
               else 
                    if(padre->izquierdo == actual) 
                        padre->izquierdo = NULL;
            }
            delete actual; // Borrar el nodo
            actual = NULL;
            // El nodo padre del actual puede ser ahora un nodo hoja, por lo tanto su
            // FE es cero, pero debemos seguir el camino a partir de su padre, si existe.
            if((padre->derecho == actual && padre->FE == 1) ||
               (padre->izquierdo == actual && padre->FE == -1)) {
               padre->FE = 0;
               actual = padre;
               padre = actual->padre;
            }
            if(padre) {
               if(padre->derecho == actual) 
                    Equilibrar(padre, DERECHO, false);
               else 
                    Equilibrar(padre, IZQUIERDO, false);
            }
            return;
         }
         else { // Si el valor est� en el nodo actual, pero no es hoja
            // Buscar nodo
            padre = actual;
            // Buscar nodo m�s izquierdo de rama derecha
            if(actual->derecho) {
               nodo = actual->derecho;
               while(nodo->izquierdo) {
                  padre = nodo;
                  nodo = nodo->izquierdo;
               }
            }
            // O buscar nodo m�s derecho de rama izquierda
            else {
               nodo = actual->izquierdo;
               while(nodo->derecho) {
                  padre = nodo;
                  nodo = nodo->derecho;
               }
            }
            // Intercambiar valores de no a borrar u nodo encontrado
            // y continuar, cerrando el bucle. El nodo encontrado no tiene
            // por qu� ser un nodo hoja, cerrando el bucle nos aseguramos
            // de que s�lo se eliminan nodos hoja.
            aux = actual->dato;
            actual->dato = nodo->dato;
            nodo->dato = aux;
            actual = nodo;
         }
      }
      else { // Todav�a no hemos encontrado el valor, seguir busc�ndolo
         padre = actual;
         if(dat > actual->dato) actual = actual->derecho;
         else if(dat < actual->dato) actual = actual->izquierdo;
      }
   }
}

