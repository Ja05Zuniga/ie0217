#include <iostream> 
#include <stdexcept>

using namespace std;
//Uso correcto del manejo de excepciones
int main() {
    int numerador, denominador, resultado;
    cout << "Ingrese el numerador";
    cin >> numerador;

    cout << "Ingrese el denominador";
    cin >> denominador;

    try {
    if (denominador == 0) {
    throw runtime_error("Error: el denominador no puedeser cero.");
    }

    resultado = numerador / denominador;
    cout << "El resultado es: " << resultado << endl; 
            //caso especial
    } catch (const exception& e) {
    cerr << e.what() << endl;
    }

    return 0;
}