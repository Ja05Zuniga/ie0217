#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>

using namespace std;

template <typename T>
T ingresarDato(const string& mensaje) {
    T dato;
    while (true) {
        cout << mensaje;
        cin >> dato;
        if (cin.fail() || cin.get() != '\n') {
            cin.clear(); // Limpiar el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            cerr << "Entrada incorrecta. Intente de nuevo." << endl;
        } else {
            break;
        }
    }
    return dato;
}

template <typename T>
vector<vector<T>> ingresarMatriz(T filas, T columnas) {
    
/*
    try {
        // Pedir al usuario el número de filas de la matriz
        filas = ingresarDato<T>("Ingrese el número de filas de la matriz: ");

        // Pedir al usuario el número de columnas de la matriz
        columnas = ingresarDato<T>("Ingrese el número de columnas de la matriz: ");
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
        throw; // Salir del programa sin procesar la matriz
    }*/

    // Declarar e inicializar la matriz
    vector<vector<T>> matriz(filas, vector<T>(columnas, 0));

    // Pedir al usuario los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            try {
                // Intentar leer el elemento de la matriz
                matriz[i][j] = ingresarDato<T>("");

            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                throw; // Salir del programa con un código de error
            }
        }
    }

    // Mostrar la matriz ingresada
    cout << "La matriz ingresada es:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return matriz;
}

template <typename T>
T operacionTipo(T operador) {
    
    try {
        

        // Validación de la opción ingresada
        while (operador < 1 || operador > 3) {
            operador = ingresarDato<T>("Error. Ingrese un valor dentro de las opciones (1. para suma, 2. para resta, 3. para multiplicacion: ");
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        throw;
    }

    return operador;
}

template <typename T>
bool validacion(T filas1, T columnas1, T filas2, T columnas2, T opcion){
    switch (opcion) {
    case 1:
        if (filas1 == filas2 || columnas1 == columnas2) {
            return true;
        } else {
            cout << "No se puede realizar la operacion" << endl;
            return false;
        }
    case 2:
        if (filas1 == filas2 || columnas1 == columnas2) {
            return true;
        } else {
            cout << "No se puede realizar la operacion" << endl;
            return false;
        }
    case 3:
        if (columnas1 == filas2) {
            return true;
        } else {
            cout << "No se puede realizar la operacion" << endl;
            return false;
        }
    default:
        cout << "Ingrese un valor valido" <<endl;
        return false;
    }
}


int main() {
    int columnas1, filas1, opcion, filas2, columnas2;

        // Pedir al usuario el número de filas de la matriz
        filas1 = ingresarDato<int>("Ingrese el número de filas de la matriz: ");
        // Pedir al usuario el número de columnas de la matriz
        columnas1 = ingresarDato<int>("Ingrese el número de columnas de la matriz: ");
        vector<vector<int>> matriz1 = ingresarMatriz<int>(filas1, columnas1);

        cout<<"Segunda matriza"<<endl;
        // Pedir al usuario el número de filas de la matriz
        filas2 = ingresarDato<int>("Ingrese el número de filas de la matriz: ");
        // Pedir al usuario el número de columnas de la matriz
        columnas2 = ingresarDato<int>("Ingrese el número de columnas de la matriz: ");
        vector<vector<int>> matriz2 = ingresarMatriz<int>(filas2, columnas2);

        cout << "Ingrese el tipo de operacion que desea realizar" << endl;
        opcion = ingresarDato<int>("1. suma (+), 2. resta (-), 3. multiplicacion (*): ");

        int op = operacionTipo<int>(opcion);

        int comprobacion = validacion<int>(filas1, columnas1, filas2, columnas2, opcion);
        if (comprobacion){
            cout<<"Operacion valida"<<endl;
        }else {cout<<"Operacion invalida"<<endl;}
        //cout << "Operación seleccionada: " << op<<" safsaf " << comprobacion<<endl;

    return 0;
}
