#include "operacionesBasicas.hpp"
int main(){
    int filas1, columnas1, filas2, columnas2, operador;
    Matriz<int> matriz;

    cout<<"ingrese el numero de filas"<<endl;
    cin>>filas1;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>columnas1;
    cout<<"ingrese el numero de filas de la segunda matriz"<<endl;
    cin>>filas2;
    cout<<"Ingrese el numero de columnas de la segunda matriz"<<endl;
    cin>>columnas2;

    cout<<"ingrese el tipo de operacion"<<endl;
    cin>>operador;
    matriz.operacionTipo(operador);

        operacionesBasicas<int> A(filas1, columnas1);
        A.ingresarElementos();
        operacionesBasicas<int> B(filas2, columnas2);
        B.ingresarElementos();
        operacionesBasicas<int> C = A + B;
        A.print();
        B.print();
        C.print();

    return 0;
}