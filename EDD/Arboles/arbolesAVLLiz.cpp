#include <iostream>

using namespace std;

struct nodoA{
	int dato;
	nodoA *izq;
	nodoA *der;
	nodoA *padre;
	int facE;
};

enum{IZQUIERDO, DERECHO};

void rotaSD(nodoA *&raiz, nodoA *nodo){
	nodoA *padre = nodo->padre;
	nodoA *p = nodo;
	nodoA *q = nodo->izq;
	nodoA *b = q->der;

	if(padre != NULL){
		if(padre->der == p)
			padre->der = q;
		else
			padre->izq = q;
	}
	else
		raiz = q;

	p->izq = b;
	q->der = p;

	p->padre = q;

	if(b)
		b->padre = p;

	q->padre = padre;

	//actualizar valores de FE de P y Q

	p->facE = 0;
	q->facE = 0;
}

void rotaSI(nodoA *&raiz, nodoA *nodo){
	nodoA *padre = nodo->padre;
	nodoA *p = nodo;
	nodoA *q = nodo->der;
	nodoA *b = q->izq;

	if(padre){
		if(padre->izq == p)
			padre->izq = q;
		else
			padre->der = q;
	}
	else
		raiz = q;

	p->der = b;
	q->izq = p;

	p->padre = q;

	if(b!=NULL)
		b->padre = p;

	q->padre = padre;

	//actualizar valores de FE de p y q

	p->facE = 0;
	q->facE = 0;
}

void rotaDD(nodoA *&raiz, nodoA nodo){
	nodoA *padre = nodo->padre;
	nodoA *p = nodo;
	nodoA *q = nodo->izq;
	nodoA *r = q->der;
	nodoA *b = r->izq;
	nodoA *c = r->der;

	//primero RSI de Q y luego RSD de P

	if(padre)
		if(padre->izq == p)
			padre ->izq = r;
		else
			padre->der = r;
	else
		raiz = r;

	q->der = b;
	p->izq = c;
	r->izq = q;
	r->der = p;

	q->padre = p->padre = r;

	r->padre = padre;

	if(b != NULL)
		b->padre = q;

	if(c != NULL)
		c->padre = p;

	switch(r->facE){
		case -1:
			q->facE = 0;
			P->facE = 1;
		break;

		case 0:
			q->facE = 0;
			p->facE = 0;
		break;

		case 1:
			q->facE = -1;
			p->facE = 0;
		break;
	}

	r->facE = 0;
}

void rotaDI(nodoA *&raiz, nodoA *nodo){
	nodoA *padre = nodo->padre;
	nodoA *p = nodo;
	nodoA *q = nodo->der;
	nodoA *r = q->izq;
	nodoA *b = r->izq;
	nodoA *c = r->der;

	//primero RSD de Q, luego RSI de P
	if(padre)
		if(padre->der == nodo)
			padre->der = r;
		else
			padre->izq = r;
	else
		raiz = r;

	q->izq = c;
	p->der = b;
	r->der = q;
	r->izq = p;

	q->padre = p->padre = r;

	r->padre = padre;

	if(c)
		c->padre = q;

	if(b)
		b->padre = p;

	switch(r->facE){
		case -1:
			p->facE = 0;
			q->facE = 1;
		break;

		case 0:
			p->facE = 0;
			q->facE = 0;
		break;

		case 1:
			p->facE = -1;
			q->facE = 0;
		break;
	}

	r->facE = 0;
}

void profundidadNodo(nodoA *nodo, int &h){
	int profN = 0;
	nodoA *aux = nodo;

	while(aux){
		profN++;
		aux = aux->padre;
	}

	if(profN > h)
		h = profN;

}

void alturaArbol(nodoA *raiz, int &h){
	if(raiz != NULL){
		alturaArbol(raiz->izq, h);
		profundidadNodo(raiz, h);
		alturaArbol(raiz->der, h);
	}
}

int buscarDato(nodoA *raiz, int elemento, nodoA *&actual, nodoA *&anterior){
	int encontrado = =0;
	anterior = NULL;
	actual = raiz;

	while(!encontrado && actual != NULL){
		if(actual->dato == elemento)
			encontrado = 1;
		else{
			anterior = actual;
			if(actual->dato > elemento)
				actual = actual->izq;
			else
				actual = actual->der;
		
		}

	}

	return encontrado;
}

void insertarDato(nodoA *&raiz, int elemento){
	nodoA *nuevo;
	nodoA *actual;
	nodoA *anterior;

	if(buscarDato(raiz, elemento, actua, anterior))
		cout<<"Elemento duplicado\n";
	else{
		nuevo = new nodo;
		nuevo->dato = elemento;
		nuevo->izq = NULL;
		nuevo->der = NULL;
		nuevo->padre = NULL;
		nuevo->facE = 0;

		if(anterior == NULL)
			raiz = nuevo;
		else{
			nuevo->padre = anterior;
			if(anterior->dato > elemento){
				anterior->izq = nuevo;
				equilibrar(anterior, IZQUIERDO, true);
			}
			else{
				anterior->der = nuevo;
				equilibrar(anterior, DERECHO, true);
			}
		}
	}
}
