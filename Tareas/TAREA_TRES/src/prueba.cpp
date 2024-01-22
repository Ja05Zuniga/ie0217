#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>

using namespace std;

//Dentro de la clase matriz
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
    // Declarar e inicializar la matriz
    vector<vector<T>> matriz(filas, vector<T>(columnas, 0));

    // Pedir al usuario los elementos de la matriz
    //cout << "Ingrese los elementos de la matriz:" << endl;
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

//Fin de la clase matriz

//Inicio de la clase operacionesBasicas
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
template <typename T>
class operacionesBasicas {
private:
    std::vector<std::vector<T>> matriz; // Contenedor para los elementos de la matriz
    size_t filas, columnas; // Número de filas y columnas

public:
    // Constructor
    operacionesBasicas(size_t filas, size_t columnas) : filas(filas), columnas(columnas), matriz(filas, std::vector<T>(columnas, 0)) {}

    // Función para sobrecargar el operador de suma
    operacionesBasicas operator+(const operacionesBasicas& other) const {
        operacionesBasicas result(filas, columnas);
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                result.matriz[i][j] = matriz[i][j] + other.matriz[i][j];
            }
        }

        return result;
    }
     // Función para sobrecargar el operador de resta
    operacionesBasicas operator-(const operacionesBasicas& other) const {
        operacionesBasicas result(filas, columnas);
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                result.matriz[i][j] = matriz[i][j] - other.matriz[i][j];
            }
        }
        
        return result;
    }
     // Función para sobrecargar el operador de multiplicacion
    operacionesBasicas operator*(const operacionesBasicas& other) const {
        operacionesBasicas result(filas, columnas);
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                result.matriz[i][j] = matriz[i][j] * other.matriz[i][j];
            }
        }
        
        return result;
    }
    // Función para ingresar elementos a la matriz
    void ingresarElementos() {
        matriz = ingresarMatriz<T>(filas, columnas);
    }
    void print() const {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }
};
//Fin de la clase operacionesBasicas
/*
//Inicio de la funcion imaginaria
template <typename T>
class OperacionCompleja {
private:
    std::vector<std::vector<std::complex<T>>> matriz; // Contenedor para los elementos de la matriz
    size_t filas, columnas; // Número de filas y columnas

public:
    // Constructor
    OperacionCompleja(size_t filas, size_t columnas) : filas(filas), columnas(columnas), matriz(filas, std::vector<std::complex<T>>(columnas, 0)) {}

    // Función para sobrecargar el operador de suma
    OperacionCompleja operator+(const OperacionCompleja& other) const {
        OperacionCompleja result(filas, columnas);
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                result.matriz[i][j] = matriz[i][j] + other.matriz[i][j];
            }
        }
        return result;
    }

    // Función para sobrecargar el operador de resta
    OperacionCompleja operator-(const OperacionCompleja& other) const {
        OperacionCompleja result(filas, columnas);
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                result.matriz[i][j] = matriz[i][j] - other.matriz[i][j];
            }
        }
        return result;
    }

    // Función para sobrecargar el operador de multiplicación
    OperacionCompleja operator*(const OperacionCompleja& other) const {
        OperacionCompleja result(filas, columnas);
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                result.matriz[i][j] = matriz[i][j] * other.matriz[i][j];
            }
        }
        return result;
    }

    // Función para ingresar elementos a la matriz de números complejos
    void ingresarElementos() {
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                cout << "Ingrese la parte real del elemento [" << i + 1 << "][" << j + 1 << "]: ";
                T realPart;
                cin >> realPart;

                cout << "Ingrese la parte imaginaria del elemento [" << i + 1 << "][" << j + 1 << "]: ";
                T imagPart;
                cin >> imagPart;

                matriz[i][j] = std::complex<T>(realPart, imagPart);
            }
        }
    }

    // Función para imprimir la matriz de números complejos
    void print() const {
        for (size_t i = 0; i < filas; ++i) {
            for (size_t j = 0; j < columnas; ++j) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }
};
//Fin de la clase imaginaria
*/


int main() {
    int columnas1, filas1, opcion, filas2, columnas2;
/*
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
        
*/  


    cout<<"Primera matriz"<<endl;
    filas1 = ingresarDato<int>("Ingrese el número de filas de la matriz: ");
    columnas1 = ingresarDato<int>("Ingrese el número de columnas de la matriz: ");

    cout<<"Segunda matriz"<<endl;
    // Pedir al usuario el número de filas de la matriz
    filas2 = ingresarDato<int>("Ingrese el número de filas de la matriz: ");
    // Pedir al usuario el número de columnas de la matriz
    columnas2 = ingresarDato<int>("Ingrese el número de columnas de la matriz: ");
    operacionesBasicas<int> A(filas1, columnas1);
    cout<<"Primera matriz"<<endl;
    A.ingresarElementos();
    A.print();

    // Ingresar elementos para la segunda matriz
    operacionesBasicas<int> B(filas2, columnas2);
    cout<<"Segunda matriz"<<endl;
    B.ingresarElementos();
    B.print();

    // Sumar las matrices e imprimir el resultado
    operacionesBasicas<int> C = A * B;
    cout << "Resultado de la suma:" << endl;
    C.print();
    return 0;
}
