#include "matriz.hpp"

template <typename T>
T Matriz<T>::ingresarDato(const std::string& mensaje) {
    T dato;
    while (true) {
        std::cout << mensaje;
        std::cin >> dato;
        if (std::cin.fail() || std::cin.get() != '\n') {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            std::cerr << "Entrada incorrecta. Intente de nuevo." << std::endl;
        } else {
            break;
        }
    }
    return dato;
}

template <typename T>
vector<vector<T>> Matriz<T>::matrizDimencionesDatos() {
    T filas, columnas;
    
    try {
        // Pedir al usuario el número de filas de la matriz
        filas = Matriz<T>::ingresarDato("Ingrese el numero de filas de la matriz: ");

        // Pedir al usuario el número de columnas de la matriz
        columnas = Matriz<T>::ingresarDato("Ingrese el numero de columnas de la matriz: ");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        throw; // Salir del programa sin procesar la matriz
    }

    // Declarar e inicializar la matriz
    std::vector<std::vector<T>> matriz(filas, std::vector<T>(columnas, 0));

    // Pedir al usuario los elementos de la matriz
    std::cout << "Ingrese los elementos de la matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            try {
                // Intentar leer el elemento de la matriz
                matriz[i][j] = Matriz<T>::ingresarDato("");

            } catch (const std::runtime_error& e) {
                std::cerr << e.what() << std::endl;
                throw; // Salir del programa con un código de error
            }
        }
    }
}


template <typename T>
T Matriz<T>:: operacionTipo(){
    T operador;
    try
    {
    std::cout << "Ingrese el tipo de operacion que desea realizar"<<std::endl;
    
    operador = ingresarDato<T>("1. suma (+), 2. resta (-), 3. multiplicacion (*): ");

    while (operador < 1 || operador > 3){
        operador = ingresarDato<T>( "Error. Ingrese un valor dentro de las opciones (1. para suma, 2. para resta, 3. para multiplicar ");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }

    return operador;  
}