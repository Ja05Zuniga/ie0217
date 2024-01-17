#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "materialAudiovisual.hpp"

class Pelicula : public MaterialAudiovisual{
    public:
        Pelicula(string resumenP, string materialRelacionadoP);

        /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
        string largoPelicula ();
        
        /*Funcion encargada de imprimir la informacion necesaria*/
        void informacioPelicula();
   
        string resumenP;
        string materialRelacionadoP;
};

#endif