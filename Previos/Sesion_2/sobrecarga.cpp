# include <iostream>
using namespace std;

// funcion que resive enteros
int hola (int a){
    if (a<0)
    a = -a;
    return a;
}

// funcion que resive flotantes
float hola (float a){
    if (a<0.0)
    a = -a;
    return a;
}

    // Utilizando diferente número de parámetros
void numero (int a, double b){
    cout<<"Esta funcion recibe dos parametros"<<endl;
    cout<<"El numero int es: "<<a<<endl;
    cout<<"El numero double es: "<<b<<endl;
}

void numero (double b){
    cout<<"El numero double es: "<<b<<endl;
}

void numero (int a){
    cout<<"El numero int es: "<<a<<endl;
}

int main (){
//Las funciones se llaman igual, pero se tomará la que reciba el tipo de parametro que se especificó en la funcion
    cout << "El valor absoluto de -5 es: "<< hola(-5) << endl;
    cout <<"El valor absoluto de -10.34 es: " << hola(-10.34f)<<endl;

//Para las funciones que reciben distintos parametros
    int a = 2;
    double b = 3.3;

// llamado de la funcion que recibe un entero
    numero(a);

// llamado de la funcion que recibe un double
    numero(b);

    // llamado de la funcion que recibe ambos, un entero y un double
    numero(a, b);
    
    return 0;
}