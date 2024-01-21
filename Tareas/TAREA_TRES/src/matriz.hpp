#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>
using namespace std;

template <typename T>
class Matriz{
    public:
    T ingresarDato(const std::string& mensaje);
    vector<vector<T>> matrizDimencionesDatos();
    T operacionTipo();
};
#include "matriz.cpp"
#endif