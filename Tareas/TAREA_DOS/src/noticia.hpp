#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "materialLectura.hpp"
class Noticia : public MaterialLectura {
    public:
        Noticia(string Nresumen, string NmaterialRelacionado);
        /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
        string hojasNoticias ();
        
        /*Funcion encargada de imprimir la informacion necesaria*/
        void informacioNoticia();
   
        string Nresumen;
        string NmaterialRelacionado;
};
#endif