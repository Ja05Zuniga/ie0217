#include <iostream>

// Se define una variable global
/* Se almacena en el segmento de data. */ 
int globalVariable = 42;

int main() {
/* Se almacena en el stack porque son variables locales. */
int stackVariable = 10;

/* Se almacena en el heap. ('new') reserva un espacion en la 
    memoria dinamica*/
int* heapVariable = new int(20);

std::cout << "Valor de globalVariable: " << globalVariable << std::endl; 

std::cout << "Valor de stackVariable: "<< stackVariable << std::endl;

std::cout << "Valor de heapVariable: " << *heapVariable << std::endl;

/* Liberar la memoria asignada en el heap. */ 
delete heapVariable;
return 0;
}