/**
 * @file ejecucion.cpp
 * @brief Contiene las funciones para realizar operaciones con matrices y mostrar resultados.
 */

#include "matriz.hpp"
#include "operacionesBasicas.hpp"
#include "operacionCompleja.hpp"
#include <complex>

/**
 * @brief Función para imprimir el resultado de operaciones básicas en matrices.
 *
 * @tparam T Tipo de dato de la matriz (puede ser int, float, double.).
 * @param operadorOp Operación a realizar (1 para suma, 2 para resta, 3 para multiplicación).
 * @param matriz1 Primera matriz.
 * @param matriz2 Segunda matriz.
 */
template <typename T>
void funcionImprimirDatos(int operadorOp, vector<vector<T>> matriz1, vector<vector<T>>matriz2){    
    
    switch (operadorOp)
    {
    case 1:
        //Sumar e imprimir las matrices
     try {
        auto resultado = operacionesBasicas<T>::sumar(matriz1, matriz2);
        operacionesBasicas<T>::imprimirMatriz(resultado);
        } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        }
        break;
    case 2:
        //restar e imprimir las matrices
        try {
        auto resultado = operacionesBasicas<T>::restar(matriz1, matriz2);
         operacionesBasicas<T>::imprimirMatriz(resultado);
        } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        }
        break;

    case 3:
    //Sumar e imprimir las matrices
  try {
        auto resultado = operacionesBasicas<T>::multiplicar(matriz1, matriz2);
        operacionesBasicas<T>::imprimirMatriz(resultado);
        } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        }
        break;
        default:
        break;
    }
}

/**
 * @brief Función para imprimir el resultado de operaciones con matrices complejas.
 *
 * @tparam T Tipo de dato de la matriz (puede ser int, float, double.).
 * @param operadorOp Operación a realizar (1 para suma, 2 para resta, 3 para multiplicación).
 * @param matriz1 Primera matriz.
 * @param matriz2 Segunda matriz.
 */
template <typename T>
void funcionImprimirDatosComplejo(int operadorOp, vector<vector<complex<T>>> matriz1, vector<vector<complex<T>>>matriz2){
       
    switch (operadorOp)
    {
    case 1:
        //Sumar e imprimir las matrices
     try {
        auto resultado = operacionCompleja<T>::sumaCompleja(matriz1, matriz2);
        operacionCompleja<T>::imprimirMatriz(resultado);
        } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        }

        break;
    case 2:
        //restar e imprimir las matrices
        try {
        auto resultado = operacionCompleja<T>::restaCompleja(matriz1, matriz2);
         operacionCompleja<T>::imprimirMatriz(resultado);
        } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        }
        break;

    case 3:
    //Sumar e imprimir las matrices
  try {
        auto resultado = operacionCompleja<T>::multiplicaCompleja(matriz1, matriz2);
        operacionCompleja<T>::imprimirMatriz(resultado);
        } catch (const std::invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        }
        break;

        default:
        break;
    }
}
