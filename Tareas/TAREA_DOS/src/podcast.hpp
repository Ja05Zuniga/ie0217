#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "materialAudiovisual.hpp"

class Podcast : public MaterialAudiovisual {
    public:
    Podcast(string Presumen, string PmaterialRelacionado);
    
    /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
    string largoPodcast ();

    /*Funcion encargada de imprimir la informacion necesaria*/
    void informacioPodcast();
    
        string Presumen;
        string PmaterialRelacionado;
};

#endif