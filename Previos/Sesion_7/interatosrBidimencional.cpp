
#include <iostream> 
#include <list>
using namespace std;

int main() {
    list<int> nums {1, 2, 3, 4, 5};

    // El iterador inicia desde el comienzo 
    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " << endl;

    // muestra los elementos en orden 
    while (itr != nums.end()) {
        cout << *itr <<",";

    // el iterador se mueve 1 posicion hacia la 'derecha' (hacia adelante)
    itr++;
    }

    cout << endl << "Moving backward: " << endl;

    // muestra los elementos hacia atras
    while (itr != nums.begin()) {
        if (itr != nums.end()) {
            cout << *itr << ", ";
    }

    // mueve el iterador 1 posicion hacia la 'izquierda' (hacia atras)
    itr--;
    }

    cout << *itr << endl;
    return 0;
}