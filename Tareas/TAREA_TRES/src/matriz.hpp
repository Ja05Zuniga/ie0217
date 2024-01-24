/**
 * @file matriz.hpp
 * @brief Definición de la clase Matriz y sus métodos.
 */

#ifndef MATRIZ_HPP
#define MATRIZ_HPP
#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>
#include <complex>

using namespace std;
/**
 * @class Matriz
 * @brief Clase que representa una matriz y proporciona funciones para manipularla.
 * @tparam T Tipo de dato de la matriz (puede ser int, float, double, etc.).
 */
template <typename T>
class Matriz {
public:
    /**
     * @brief Constructor por defecto de la clase Matriz.
     */
    Matriz();
    /**
     * @brief Función para ingresar un dato de tipo T desde la consola.
     * @param mensaje Mensaje a mostrar antes de solicitar la entrada.
     * @return Dato de tipo T ingresado por el usuario.
     */
    T ingresarDato(const string& mensaje);
    /**
     * @brief Función para ingresar una matriz de tipo T desde la consola.
     * @return Matriz de tipo T ingresada por el usuario.
     */
    vector<vector<T>> ingresarMatriz();
    
    /**
     * @brief Función para ingresar una matriz compleja desde la consola.
     * @return Matriz compleja ingresada por el usuario.
     */
    vector<vector<std::complex<T>>>ingresarMatrizCompleja();
    
    /**
     * @brief Función para realizar operaciones en la matriz (suma, resta, multiplicación).
     * @param operador Opción de operación ingresada por el usuario.
     * @return Operador validado.
     */
    T operacionTipo(T operador);

};
#include "matriz.cpp"
#endif
