#include <iostream> 
using namespace std; 

int main() {
    int var = 5;

    // Se declara el puntero
    int* pointVar;

    // En donde está la variable
    pointVar = &var;

    // print la variable
    cout << "var = " << var << endl;

    // print dirección de la variable
    cout << "Address of var (&var) = " << &var << endl;

    // print pointVar
    cout << "pointVar = "<< pointVar << endl;

    // print el contenido de la dirección pointVar
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    return 0;
    }

    