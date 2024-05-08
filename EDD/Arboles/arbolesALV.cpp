
/*s
El comportamiento de los ABB no es siempre tan bueno como nos gustaría

Para minimizar el problema de los ABB desequilibrados se puede recurrir a algoritmos de equilibrado de arboles globales
	Ej. Crear una lista mediante la lectura en inorden del árbol, y volver a reconstruirlo equilibrado
	(conociendo el número de elementos)

	Explorar y reconstruir todo el árbol cada vez que se inserta o se elimina un elemento


El AVL es un ABB en el que para cada nodo, las alturas de sus subárboles izquierdo y derecho no difieren en más de 1

No se trata de árboles perfectamente equilibrados, pero sí lo suficiente, para usarlos donde los ABB no garantizan
tiempos de búsqueda óptimos

El algoritmo para mantener un árbol AVL equilibrado se basa en reequilibrados locales, de modo que no es necesario explorar todo el árbol

Factor de equilibrio FE

REGISTRO nodo
	dato
	apuntIzq
	apuntDer
	FE
FIN_REGISTRO

El FE es la diferencia entre las alturas del árbol derecho y el izquierdo:
	FE = altura subárbol derecho - altura subárbol izquierdo

Por definición, para un árbol AVL este valor debe ser -1, 0, 1

*/

#include <iostream>

using namespace std;

int main() {
	
	return 0;
}