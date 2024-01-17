#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "materialAudiovisual.hpp"

class Pelicula : public MaterialAudiovisual{
    public:
        Pelicula(string& titulo, string& grupo, string& tipoMaterial, string& autor,  string& genero, string& estado, int hojas, float precio,
        string& resumen, string& materialRelacionado);

        /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
        string largoPelicula ();
        
        /*Funcion encargada de imprimir la informacion necesaria*/
        void informacioPelicula();
   
        string resumen;
        string materialRelacionado;
};

#endif