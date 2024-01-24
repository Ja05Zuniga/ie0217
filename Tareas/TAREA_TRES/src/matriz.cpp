/**
 * @file matriz.cpp
 * @brief Implementación de los métodos de la clase Matriz.
 */
#include "matriz.hpp"

template <typename T>
Matriz<T>::Matriz() {}

template <typename T>
T Matriz<T>::ingresarDato(const string& mensaje) {
    T dato;
    while (true) {
        cout << mensaje;
        cin >> dato;
        if (cin.fail()|| std::cin.get() != '\n') {
            cin.clear(); // Limpiar el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            cerr << "Entrada invalida. Intente de nuevo." << endl;
        } else {
            break;
        }
    }
    return dato;
}

template <typename T>
vector<vector<T>> Matriz<T>::ingresarMatriz() {
    T filas, columnas;
    filas = ingresarDato("Ingrese el numero de filas: ");
    columnas = ingresarDato("Ingrese el numero de columnas: ");

    // Declarar e inicializar la matriz
    vector<vector<T>> matriz(filas, vector<T>(columnas, 0));

    // Pedir al usuario los elementos de la matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            try {
               // Intentar leer el elemento de la matriz
                matriz[i][j] = ingresarDato("");

            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                throw; // Salir del programa con un código de error
            }
        }
    }
    return matriz;
}

template <typename T>
T Matriz<T>::operacionTipo(T operador) {
    try {
        // Validación de la opción ingresada
        while (operador < 1 || operador > 3) {
            operador = ingresarDato("Error. Ingrese un valor dentro de las opciones (1. para suma, 2. para resta, 3. para multiplicacion): ");
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        throw;
    }

    return operador;
}

template <typename T>
std::vector<std::vector<std::complex<T>>> Matriz<T>::ingresarMatrizCompleja() {
    int filas, columnas;
    T real, imag;
    filas = ingresarDato("Ingrese el numero de filas: ");
    columnas = ingresarDato("Ingrese el numero de columnas: ");

    std::vector<std::vector<std::complex<T>>> matriz(filas, std::vector<std::complex<T>>(columnas));

    for (size_t i = 0; i < filas; ++i) {
        for (size_t j = 0; j < columnas; ++j) {
            std::cout << "Ingrese la parte real del elemento [" << i + 1 << "][" << j + 1 << "]: ";
            real = ingresarDato(": ");

            std::cout << "Ingrese la parte imaginaria del elemento [" << i + 1 << "][" << j + 1 << "]: ";
            imag = ingresarDato(": ");

            matriz[i][j] = std::complex<T>(real, imag);
        }
    }

    return matriz;
}
