#include <iostream> 
using namespace std;

int main() {
    // variables del puntero
    float arr[3];
    float *ptr;

    cout << "Displaying address using arrays: "<< endl;

    //for para imprimir las direcciones de todos los elementos del array 

    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = "<< &arr[i] << endl;
    }
    // *ptr = &arr[0]
    ptr = arr;
    
    cout<<"\nDisplaying address using pointers: "<<endl;

    //for para imprimir las direcciones de todos los elementos del array
    //usando notación de puntero

    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }
    return 0;

}