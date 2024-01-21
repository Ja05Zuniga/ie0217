#include "operacionesBasicas.hpp"
template <typename T>
bool OperacionesBasicas<T>:: validacion(T filas1, T columnas1, T filas2, T columnas2, T opcion){
    switch (opcion) {
    case 1:
        if (filas1 == filas2 || columnas1 == columnas2) {
            return true;
        } else {
            cout << "No se puede realizar la operacion" << endl;
            return false;
        }
    case 2:
        if (filas1 == filas2 || columnas1 == columnas2) {
            return true;
        } else {
            cout << "No se puede realizar la operacion" << endl;
            return false;
        }
    case 3:
        if (columnas1 == filas2) {
            return true;
        } else {
            cout << "No se puede realizar la operacion" << endl;
            return false;
        }
    default:
        cout << "Ingrese un valor valido" <<endl;
        return false;
    }
}
