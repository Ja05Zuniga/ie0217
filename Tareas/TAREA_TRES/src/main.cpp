/**
 * @file main.cpp
 * @brief Archivo principal para realizar operaciones en matrices con diferentes tipos de datos.
 */

#include "ejecucion.cpp"

/**
 * @brief Función principal del programa.
 *
 * El programa permite al usuario realizar operaciones en matrices con diferentes tipos de datos
 * (enteros, decimales o números complejos).
 *
 * @return 0 si la ejecución es exitosa.
 */
int main(){
int operadorOp, dato;
    try{
        cout<<"Ingrese el tipo de dato (1. int 2. Float 3. Complejos) de la operacion"<<endl;
        while (dato>3||dato<1){
            cout<<"Ingrese un valor valido: "<<endl;
            cin>>dato;
    }
    }catch (const runtime_error& e) {
            cerr << e.what() << endl;
            return dato;
    }
    
    //std::complex<double> operador;
    Matriz<int> matrizI;
    std::cout<<"Ingrese el tipo de operacion a realizar"<<endl;
    operadorOp = matrizI.ingresarDato("1. para suma, 2. para resta, 3. para multiplicacion): ");
    matrizI.operacionTipo(operadorOp);

    // Matrices y operaciones para tipos de dato float
    std::vector<std::vector<float>> matrizFloat1, matrizFloat2;
    operacionesBasicas<float> imprimirF;
    Matriz<float> matrizF;

    // Matrices y operaciones para tipos de dato int
    std::vector<std::vector<int>> matrizInt1, matrizInt2;
    operacionesBasicas<int> imprimirI;
    Matriz<int> matriz;

    // Matrices y operaciones para tipos de dato complejo
    std::vector<std::vector<complex<double>>> matrizC1, matrizC2;
    operacionCompleja<double> imprimiC;
    Matriz<double> matrizCompleja;

switch (dato)
{
case 1:
        // Operaciones para int
        std::cout<<"Primera matriz"<<endl;
        matrizInt1 = matriz.ingresarMatriz();

        std::cout<<"Segunda matriz"<<endl;
        matrizInt2 = matriz.ingresarMatriz();

        cout<<"Primera matriz"<<endl;
        imprimirI.imprimirMatriz(matrizInt1);

        cout<<"Segunda matriz"<<endl;
        imprimirI.imprimirMatriz(matrizInt2);

        cout<<"Resultado de la suma"<<endl;
        funcionImprimirDatos<int>(operadorOp, matrizInt1, matrizInt2);  
        break;
case 2:
        // Operaciones para float
        std::cout<<"Primera matriz"<<endl;
        matrizFloat1 = matrizF.ingresarMatriz();

        std::cout<<"Segunda matriz"<<endl;
        matrizFloat2 = matrizF.ingresarMatriz();

        cout<<"Primera matriz"<<endl;
        imprimirF.imprimirMatriz(matrizFloat1);

        cout<<"Segunda matriz"<<endl;
        imprimirF.imprimirMatriz(matrizFloat2);

        cout<<"Resultado de la suma"<<endl;
        funcionImprimirDatos<float>(operadorOp, matrizFloat1, matrizFloat2); 
        break;
        

case 3:
        // Operaciones para complejos
        std::cout<<"Primera matriz"<<endl;
        matrizC1 = matrizCompleja.ingresarMatrizCompleja();

        std::cout<<"Segunda matriz"<<endl;
        matrizC2 = matrizCompleja.ingresarMatrizCompleja();

        cout<<"Primera matriz"<<endl;
        imprimiC.imprimirMatriz(matrizC1);

        cout<<"Segunda matriz"<<endl;
        imprimiC.imprimirMatriz(matrizC2);
        
        cout<<"Resultado de la suma"<<endl;
        funcionImprimirDatosComplejo<double>(operadorOp, matrizC1, matrizC2); 
        break;

default:
    break;
}
    return 0;
}
