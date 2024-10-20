#include <iostream>
using namespace std;

// definir la función para intercambiar valores
void swap(int &n1, int &n2) {
    int temp; 
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {

    int a = 1, b = 2;

    cout << "Antes del cambio" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "\nDespues del cambio" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}