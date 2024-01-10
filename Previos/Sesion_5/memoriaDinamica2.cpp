#include <iostream> 
using namespace std;
int main() {
    // declarar un puntero flotante y uno int
    int* pointInt;
    float* pointFloat;

    // reservar memoria 
    // 'new' devuelve la direccion de memoria
    pointInt = new int;
    pointFloat = new float;

    // Asignar valor al puntero
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout<< *pointInt << endl; 
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;
    return 0;
}