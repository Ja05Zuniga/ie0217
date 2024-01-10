
#include <cstdlib> 
#include <iostream> 
using namespace std;

int main() { 
    int *ptr;
    // calloc
    //Devuelve un puntero void* al inicio de la memoria asignada. Por eso el (int *)
    //Requiere más recursos computacionales por inicializándolo a cero
    ptr = (int *) calloc(5, sizeof(int)); 
                    //Cuantos elementos desea asignar, 5 --- Y de que tamaño sizeof(int)

    if (!ptr) { //Si no es valido. Entonces
        cout<<"Memory Allocation Failed"; 
        exit(1);
    }
    
    cout<<"Initializing values..." << endl;

    for (int i = 0; i < 5; i++) {
    ptr[i] = i * 2 + 1;
    }
    cout << "Initialized values" << endl;
    for (int i = 0; i < 5; i++) {
    /* ptr[i] and *(ptr+i) can be used interchangeably */ cout<< *(ptr + i) << endl;
    }

    // se utiliza para liberar la memoria previamente asignada con malloc, calloc o realloc.
    free(ptr);

    return 0;
}
