# include <iostream>
using namespace std;

// Variables globales (afuera de la funcion)

int c;

int main () {
    // Variable local (dentro de la funcion)
    int a, b;
    a = 10;
    b = 20;
    c = a + b;
    cout << c;
    return 0;
}