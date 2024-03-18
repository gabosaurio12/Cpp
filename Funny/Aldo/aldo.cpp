#include <iostream>
#include <string.h> // biblioteca necesaria para usar "strcmp"

using namespace std;

int contarCaracteres(char *palabra) {
  int i = 0;
  while (palabra[i] != '\0') {
    i++;
  }
  return i + 1; // Aumentamos 1 para agregar el caracter nulo
}

void convertirMinuscula(char *palabra) {
  int i = 0;
  while (palabra[i] != '\0') {
    if (palabra[i] >= 65 && palabra[i] <= 90) {
      palabra[i] += 32;
    }
    i++;
  }
}

void arregloMinusculas(char *arregloAux[], int nPalabras) {
  for (int i = 0; i < nPalabras; i++) {
    convertirMinuscula(*(arregloAux + i));
  }
}

bool esCadenaVacia(char *cadena) {
  bool bandera = 1;
  while (bandera && *cadena) {
    if (*cadena != ' ') {
      bandera = 0; // Si encuentra algun caracter significa que NO esta vacia, por lo que podemos trabajar
    }
    cadena++;
  }
  return bandera;
}

int numeroPalabras(char *cadena) {
  if (esCadenaVacia(cadena)) {
    return 0; // Si no hay palabras retorna 0 y no hace nada el programa.
  }

  int contador = 0;
  if (*cadena != ' ') {
    contador++; // si lo primero que hay es una palabra entonces aumentamos el contador , esto porque si , el contador unicamente aumentaria si hay espacios
  }

  while (*cadena) {
    if (*cadena == ' ' && *(cadena + 1) != '\0' && *(cadena + 1) != ' ') {
      contador++; // Cada vez que encuentre un espacio, si la posicion siguiente NO es un espacio incrementa el contador
    }
    cadena++;
  }
  return contador;
}

void imprimirArreglo(char *arreglo[], int fin) {
  for (int i = 0; i < fin; i++) {
    cout << *(arreglo + i) << " ";
  }
  cout << "\n";
}

void QuickSort(char *a[], int inicio, int fin, char *aux[]) {

  if (inicio < fin) {
    int pivote = fin;
    int menores = inicio;
    for (int j = menores; j < fin; j++) {
      if (strcmp(*(aux + j), *(aux + pivote)) < 0) { // Usamos strcmp porque es una funcion que compara cadenas, si la de la izquierda es menor o igual que la derecha se ejecuta la condicion
        swap(*(a + j), *(a + menores));
        swap(*(aux + j), *(aux + menores));
        menores++;
      }
    }
    swap(*(a + menores), *(a + fin));
    swap(*(aux + menores), *(aux + fin));

    QuickSort(a, inicio, menores - 1, aux); // Recursividad
    QuickSort(a, menores + 1, fin, aux);
  }
}

void crearArreglos(char *cadenaPtr, char *arregloPunteros[], char *aux[]) {
  int j = 0;
  while (*cadenaPtr) {
    if (*cadenaPtr != '\0' && *cadenaPtr != ' ') {
      char *palabra = cadenaPtr; // Si encuentra una palabra, crea un puntero a esa palabra
      while (*cadenaPtr != '\0' && *cadenaPtr != ' ') {
        cadenaPtr++; // Itera sobre si mismo para calcular la longitud de la palabra
        if (*cadenaPtr == ' ') {
          *cadenaPtr = '\0'; // Una vez que termina la palabra, la corta con un caracter nulo para indicar el fin.
        }
      }
      char *palabraAux = new char[contarCaracteres(cadenaPtr)]; // Crear memoria dinamica nueva para almacenar la palabra en el aux2 y poder trabajar sin alterar la original
      strcpy(palabraAux, palabra);                              // Copiamos la palabra DE palabraAux EN palabraAux2
      arregloPunteros[j] = palabra;                             // guardamos la palabra en la posicion J
      aux[j] = palabraAux;                                      // En el aux hacemos lo mismo, pero con la palabra Auxiliar
      j++;
    }
    cadenaPtr++;
  }
}

void crearPrograma(int nPalabras, char *cadena) {
  char *arregloPunteros[nPalabras];                                                              // Crear un arreglo de punteros del tamano de nPalabras para almacenar cada palabra en cada posicion.
  char *auxArreglo[nPalabras];                                                                   // un arreglo auxiliar para convertir toda la cadena a minuscula y asi comparar
  cout << "La frase: " << cadena << ", Tiene un total de " << nPalabras << " palabras." << endl; // Verificar que funcione el contador de palabras
  crearArreglos(cadena, arregloPunteros, auxArreglo);                                            //  Asignamos a cada posicion del arreglo una palabra

  arregloMinusculas(auxArreglo, nPalabras); // Pasamos todo el arreglo a minusculas porque asi funcionara bien strcmp

  QuickSort(arregloPunteros, 0, nPalabras - 1, auxArreglo); // Usamos el "mas eficiente" metodo de ordenacion

  cout << "\nLa palabra ordenada es: " << endl;
  imprimirArreglo(arregloPunteros, nPalabras);
  cout << "El arreglo Aux es: \n";
  imprimirArreglo(auxArreglo, nPalabras);

  for (int i = 0; i < nPalabras; i++) {
    delete[] auxArreglo[i];
  }
}

void menuPrincipal() {
  char *cadena = new char[100]; // Arreglo dinamico porque queremos maximizar la memoria del programa
  cout << "Escribe una frase: ";
  cin.getline(cadena, 100);

  int nPalabras = numeroPalabras(cadena); // Asignamos el numero de palabras para crear el arreglo de punteros.

  if (!nPalabras) {
    cout << "No ingreso ninguna palabra. " << endl;
  } else {
    crearPrograma(nPalabras, cadena);
  }
  cout << "Fin del programa" << endl;
  delete[] cadena; // !! Importante siempre borrar la memoria !!
}

int main() {
  menuPrincipal();
  return 0;
}