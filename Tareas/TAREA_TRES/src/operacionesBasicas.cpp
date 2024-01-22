#include "operacionesBasicas.hpp"

template <typename T>
operacionesBasicas<T>::operacionesBasicas(size_t filas, size_t columnas) : filas(filas), columnas(columnas), matriz(filas, std::vector<T>(columnas, 0)) {}

template <typename T>
bool operacionesBasicas<T>::validacion(T filas1, T columnas1,T filas2, T columnas2, T opcion) {
    switch (opcion) {
    case 1:
        if (filas1 == filas2 || columnas1 == columnas2) {
            return true;
        } else {
            cout << "No se puede realizar la operación" << endl;
            return false;
        }
    case 2:
        if (filas1 == filas2 || columnas1 == columnas2) {
            return true;
        } else {
            cout << "No se puede realizar la operación" << endl;
            return false;
        }
    case 3:
        if (columnas1 == filas2) {
            return true;
        } else {
            cout << "No se puede realizar la operación" << endl;
            return false;
        }
    default:
        cout << "Ingrese un valor válido" << endl;
        return false;
    }
}


template <typename T>
void operacionesBasicas<T>::ingresarElementos() {
    Matriz<T> mat;
    matriz = mat.ingresarMatriz(filas, columnas);
}

template <typename T>
operacionesBasicas<T> operacionesBasicas<T>::operator+(const operacionesBasicas& other) const {
    operacionesBasicas result(filas, columnas);
    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < columnas; ++j) {
            result.matriz[i][j] = matriz[i][j] + other.matriz[i][j];
        }
    }
    return result;
}

template <typename T>
operacionesBasicas<T> operacionesBasicas<T>::operator-(const operacionesBasicas& other) const {
    operacionesBasicas result(filas, columnas);
    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < columnas; ++j) {
            result.matriz[i][j] = matriz[i][j] - other.matriz[i][j];
        }
    }
    return result;
}

template <typename T>
operacionesBasicas<T> operacionesBasicas<T>::operator*(const operacionesBasicas& other) const {
    operacionesBasicas result(filas, columnas);
    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < columnas; ++j) {
            result.matriz[i][j] = matriz[i][j] * other.matriz[i][j];
        }
    }
    return result;
}

template <typename T>
void operacionesBasicas<T>::print() const {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
