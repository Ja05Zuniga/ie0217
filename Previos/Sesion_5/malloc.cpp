
#include <iostream> 
#include <cstdlib>
using namespace std;

int main() {
    // allocate memory of int size to an int pointer 
    //malloc Devuelve un puntero void* al inicio de la memoria asignada.
    int* ptr = (int*) malloc(sizeof(int)); //por eso el (*int) adelante de malloc
    //Lo que recibe es el tamaño del tipo y el tipo
    //sizeof nos cura en salud porque lo hace automatico

    // assign the value 5 to allocated memory 
    *ptr = 5;

    cout << *ptr;

    return 0;
}
// Output: 5