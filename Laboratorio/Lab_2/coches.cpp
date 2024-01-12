#include "coches.hpp"

Coche::Coche(int velocidad, int numPuertas):Vehiculo(velocidad), numPuertas(numPuertas){}

void Coche :: abrirPuertas(){
    /*Codigo para activar sensores que abren puertas*/
    cout<<"Abrir puertas"<<numPuertas<<"Puertas del coche "<<endl;
}
