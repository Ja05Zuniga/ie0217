#include "vehiculo.hpp"

//Vehiculo::Vehiculo(int velocidad) : velocidad(velocidad){}
//Son equivalentes
Vehiculo::Vehiculo(int para_velocidad){
    this->velocidad = para_velocidad;
}

void Vehiculo::acelerar(){
    cout<<"Acelerar el vehiculo hasta "<<velocidad<<endl;
    }

void Vehiculo::frenar(){
    cout<<"frenando el vehiculo "<<endl;

}