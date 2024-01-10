#include<iostream>
using namespace std;

int main() {
    // Declare un puntero a int
    int* pointVar;

    // Dinámicamente asigna memoria para una variable int
    // 'new' devuelve la dirección de memoria que se reservó
    pointVar = new int;

    // Asigna un valor a la memoria de la variable
    *pointVar = 45;

    // Imprime el valor almacenado en la memoria
    cout << *pointVar << endl; 
    // Salida esperada: 45

    // Libera la memoria asignada dinámicamente
    delete pointVar;

    return 0;
}
