/**
 * @file operacionesBasicas.cpp
 * @brief Implementación de los métodos de la clase operacionesBasicas.
 */
#include "operacionesBasicas.hpp"

template <typename T>
bool operacionesBasicas<T>::validarDimensiones(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2) {
    return (matriz1.size() == matriz2.size()) && (matriz1[0].size() == matriz2[0].size());
}

template <typename T>
std::vector<std::vector<T>> operacionesBasicas<T>::sumar(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2) {
    
    if (!validarDimensiones(matriz1, matriz2)) {
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
    }


    std::vector<std::vector<T>> resultado(matriz1.size(), std::vector<T>(matriz1[0].size()));

    for (size_t i = 0; i < matriz1.size(); ++i) {
        for (size_t j = 0; j < matriz1[0].size(); ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultado;
}

template <typename T>
std::vector<std::vector<T>> operacionesBasicas<T>::restar(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2) {
  
    if (!validarDimensiones(matriz1, matriz2)) {
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
    }   
   


    std::vector<std::vector<T>> resultado(matriz1.size(), std::vector<T>(matriz1[0].size()));

    for (size_t i = 0; i < matriz1.size(); ++i) {
        for (size_t j = 0; j < matriz1[0].size(); ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    return resultado;
}

template <typename T>
std::vector<std::vector<T>> operacionesBasicas<T>::multiplicar(const std::vector<std::vector<T>>& matriz1, const std::vector<std::vector<T>>& matriz2) {

    if (matriz1[0].size() != matriz2.size()) {
        throw std::invalid_argument("El numero de columnas de la primera matriz no coincide con el numero de filas de la segunda matriz para multiplicar.");
    }

    std::vector<std::vector<T>> resultado(matriz1.size(), std::vector<T>(matriz2[0].size(), 0));

    for (size_t i = 0; i < matriz1.size(); ++i) {
        for (size_t j = 0; j < matriz2[0].size(); ++j) {
            for (size_t k = 0; k < matriz1[0].size(); ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

template <typename T>
void operacionesBasicas<T>::imprimirMatriz(const std::vector<std::vector<T>>& matriz) {
        for (const auto& fila : matriz) {
            for (const auto& elemento : fila) {
                std::cout << elemento << " ";
            }
            std::cout << std::endl;
        }
    }