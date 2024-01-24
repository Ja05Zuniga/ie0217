#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include <iostream>
#include <vector>
/**
 * @class operacionesBasicas
 * @brief Clase que proporciona operaciones como suma, resta, multiplicación con matrices.
 * @tparam T Tipo de dato de la matriz (puede ser float, double, etc.).
 */
template <typename T>
class operacionesBasicas {
private:
    /**
     * @brief Método privado para validar las dimensiones de las matrices.
     * @param matriz1 Primera matriz a comparar.
     * @param matriz2 Segunda matriz a comparar.
     * @return true si las matrices tienen las mismas dimensiones, false si no contrario.
     */    
    static bool validarDimensiones(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2);

public:
    /**
     * @brief Método para sumar matrices.
     * @param matriz1 Primera matriz a sumar.
     * @param matriz2 Segunda matriz a sumar.
     * @return Resultado de la suma de las matrices.
     * @throw std::invalid_argument si las matrices no tienen las mismas dimensiones.
     */    
    static std::vector<std::vector<T>> sumar(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2);

    /**
     * @brief Método para restar matrices.
     * @param matriz1 Matriz a la que se resta.
     * @param matriz2 Matriz que se resta.
     * @return Resultado de la resta de las matrices.
     * @throw std::invalid_argument si las matrices no tienen las mismas dimensiones.
     */
    static std::vector<std::vector<T>> restar(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2);

    /**
     * @brief Método para multiplicar matrices.
     * @param matriz1 Primera matriz a multiplicar.
     * @param matriz2 Segunda matriz a multiplicar.
     * @return Resultado de la multiplicación de las matrices.
     * @throw std::invalid_argument si las dimensiones no son compatibles para la multiplicación.
     */
    static std::vector<std::vector<T>> multiplicar(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2);
    
    /**
     * @brief Método para imprimir una matriz en la consola.
     * @param matriz Matriz a imprimir.
     */
    static void imprimirMatriz(const std::vector<std::vector<T>>& matriz);
};
#include "operacionesBasicas.cpp"
#endif 
