#ifndef LIBRO__HPP
#define LIBRO__HPP
#include "materialLectura.hpp"
class Libro : public MaterialLectura {
    public:
        Libro(string resumenL, string materialRelacionadoL);
        
        /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
        string hojasLibro();

        /*Funcion encargada de imprimir la informacion necesaria*/
        void informacioLibro();
    
        string resumenL;
        string materialRelacionadoL;
};
#endif