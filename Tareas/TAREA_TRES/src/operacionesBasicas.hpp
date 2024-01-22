#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include <iostream>
#include <vector>
#include "matriz.hpp"

using namespace std;

template <typename T>
class operacionesBasicas {
private:
    std::vector<std::vector<T>> matriz; // Contenedor para los elementos de la matriz
    size_t filas, columnas; // Número de filas y columnas

public:
    // Constructor
    operacionesBasicas(size_t filas, size_t columnas);

    // Función para ingresar elementos a la matriz
    void ingresarElementos();

    // Función para sobrecargar el operador de suma
    operacionesBasicas operator+(const operacionesBasicas& other) const;

    // Función para sobrecargar el operador de resta
    operacionesBasicas operator-(const operacionesBasicas& other) const;

    // Función para sobrecargar el operador de multiplicación
    operacionesBasicas operator*(const operacionesBasicas& other) const;

    // Método para validar operaciones
    bool validacion(T filas1, T columnas1,T filas2, T columnas2, T opcion);

    // Método para imprimir la matriz
    void print() const;
};

#include "operacionesBasicas.cpp"

#endif // OPERACIONESBASICAS_HPP
