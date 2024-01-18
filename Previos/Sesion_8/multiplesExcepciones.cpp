#include <iostream>
using namespace std;

int main (){
    double numerador, denominador, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    cout<<"Enter array index: ";
    cin>>index;

    try{
        if (index >=4)
            throw "Error: Array fuera del limite";
        
    cout<<"Enter numerator: ";
    cin>>numerador;

    cout<<"Enter denominator: ";
    cin>>denominador;
    
    if (denominador == 0)
        throw 0;

    arr[index]=numerador/denominador;
    cout<<arr[index]<<endl;
    }

//Como "throw" en el tamaño del array devuelve una cadena de caracteres. Entonces este cath es el que lo toma.
catch (const char* msg){
    cout<<msg<<endl;
}

//Si el error es un numero entero (0). Entoces, lo toma este catch
catch(const int num){
    cout<<"Error: no se puede dividir entre "<< num <<endl;
}

//Cuando no activa ningun cath lo toma, este se activa
catch(...){
    cout<<"Error inesperado"<<endl;
}

return 0;

}