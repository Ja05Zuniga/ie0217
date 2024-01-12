#ifndef COCHES_HPP
#define COCHES_HPP

#include "vehiculo.hpp"

class Coche : public Vehiculo {
    public:
        Coche (int velocidad, int numPuertas);
        void abrirPuertas ();
        
    
    private:
        int numPuertas;

};


#endif 