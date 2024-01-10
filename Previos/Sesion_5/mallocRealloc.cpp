
#include <iostream> 
#include <cstdlib>
using namespace std;

int main() {
    float *ptr, *new_ptr;

    ptr = (float *)malloc(5* sizeof(float));
                        //Cuantos elementos desea asignar, 5 --- Y de que tamaño sizeof(int)
                        //CUIDADO NOTACION

    if (ptr== NULL) {
    cout << "Memory Allocation Failed"; 
    exit(1);
    }
    /* Initializing memory block */ 
    for (int i = 0; i < 5; i++) { ptr[i]=i* 1.5;
    }

    /* reallocating memory */
            //realloc
            /*Puede redimensionar el bloque existente o asignar uno nuevo, y 
            devuelve un puntero al nuevo bloque de memoria. Se utiliza para cambiar
            el tamaño de un bloque de memoria previamente asignado con malloc o calloc.
            */
    new_ptr = (float *) realloc(ptr, 10 * sizeof(float)); 
                                // Aqui ptr es la direccion de ptr
                                //10(cuantos elementos se le asigna) * sizeof(float) es el tamaño
    if (new_ptr == NULL) {
    cout << "Memory Re-allocation Failed"; 
    exit(1);
    }
    /* Initializing re-allocated memory-block */ 
    for (int i= 5; i < 10; i++) {
    new_ptr[i] = i * 2.5;
    }
    cout << "Printing Values" << endl;

    for (int i = 0; i < 10; i++){
    cout << new_ptr[i] << endl;
    }
    free(new_ptr);

    return 0;
}