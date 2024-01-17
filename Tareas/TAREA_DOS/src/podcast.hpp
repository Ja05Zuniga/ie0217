#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "materialAudiovisual.hpp"

class Podcast : public MaterialAudiovisual {
    public:
    Podcast(string& titulo, string& grupo, string& tipoMaterial, string& autor,  string& genero, string& estado, int hojas, float precio, 
    string& resumen, string& materialRelacionado);
    
    /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
    string largoPodcast ();

    /*Funcion encargada de imprimir la informacion necesaria*/
    void informacioPodcast();
    
        string resumen;
        string materialRelacionado;
};

#endif