#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Introduzca un número no negativo: ";
    cin >> n;
    result = factorial(n);
    cout << "Factorial de" << n <<  " = " << result; 
    return 0;
}

int factorial (int n) {
    if (n > 1) {
        return n * factorial(n - 1);

    } else {
        return 1;
    }
}