/**
 * @file operacionCompleja.hpp
 * @brief Definición de la clase operacionCompleja y sus métodos.
 */
#ifndef OPERACIONCOMPLEJA_HPP
#define OPERACIONCOMPLEJA_HPP
#include <iostream>
#include <vector>
#include <complex>

/**
 * @class operacionCompleja
 * @brief Clase que proporciona operaciones complejas en matrices.
 * @tparam T Tipo de dato de la matriz (puede ser float, double, etc.).
 */
template <typename T>
class operacionCompleja {
private:
/**
     * @brief Método privado para validar las dimensiones de las matrices.
     * @param matriz1 Primera matriz a comparar.
     * @param matriz2 Segunda matriz a comparar.
     * @return true si las matrices tienen las mismas dimensiones, false de lo contrario.
     */    
    static bool validarDimensiones(const std::vector<std::vector<std::complex<T>>>& matriz1, const std::vector<std::vector<std::complex<T>>>& matriz2);

public:
 /**
     * @brief Método para sumar matrices complejas.
     * @param matriz1 Primera matriz a sumar.
     * @param matriz2 Segunda matriz a sumar.
     * @return Resultado de la suma de las matrices.
     * @throw std::invalid_argument si las matrices no tienen las mismas dimensiones.
     */    
    static std::vector<std::vector<std::complex<T>>> sumaCompleja(const std::vector<std::vector<std::complex<T>>>& matriz1, const std::vector<std::vector<std::complex<T>>>& matriz2);

   /**
     * @brief Método para restar matrices complejas.
     * @param matriz1 Matriz a la que se resta.
     * @param matriz2 Matriz que se resta.
     * @return Resultado de la resta de las matrices.
     * @throw std::invalid_argument si las matrices no tienen las mismas dimensiones.
     */
    static std::vector<std::vector<std::complex<T>>> restaCompleja(const std::vector<std::vector<std::complex<T>>>& matriz1, const std::vector<std::vector<std::complex<T>>>& matriz2);

   /**
     * @brief Método para multiplicar matrices complejas.
     * @param matriz1 Primera matriz a multiplicar.
     * @param matriz2 Segunda matriz a multiplicar.
     * @return Resultado de la multiplicación de las matrices.
     * @throw std::invalid_argument si las dimensiones no son compatibles para la multiplicación.
     */
    static std::vector<std::vector<std::complex<T>>> multiplicaCompleja(const std::vector<std::vector<std::complex<T>>>& matriz1, const std::vector<std::vector<std::complex<T>>>& matriz2);

    /**
     * @brief Método para imprimir una matriz compleja en la consola.
     * @param matriz Matriz a imprimir.
     */
    static void imprimirMatriz(const std::vector<std::vector<std::complex<T>>>& matriz);
};
#include "operacionCompleja.cpp"
#endif