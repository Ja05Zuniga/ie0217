#ifndef MATRIZ_HPP
#define MATRIZ_HPP
#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>

using namespace std;

template <typename T>
class Matriz {
public:
    Matriz();
    vector<vector<T>> ingresarMatriz();
    T operacionTipo(T operador);
private:
    T ingresarDato(const string& mensaje);
};

#include "matriz.cpp"
#endif
