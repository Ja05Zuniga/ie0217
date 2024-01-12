#include "motoCoche.hpp"
MotoCoche::MotoCoche (int velocidad, int numPuertas, bool tieneCasco)
: Coche(velocidad, numPuertas), Moto(velocidad, tieneCasco){
    cout<<"Motocoche"<< velocidad<<numPuertas<<tieneCasco<<endl;
}