#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "materialLectura.hpp"
class Noticia : public MaterialLectura {
    public:
        Noticia(string& titulo, string& grupo, string& tipoMaterial, string& autor, string& editorial, string& genero, string& estado, int hojas, float precio,
        string& resumen, string& materialRelacionado);
        /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
        string hojasNoticias ();
        
        /*Funcion encargada de imprimir la informacion necesaria*/
        void informacioNoticia();
   
        string resumen;
        string materialRelacionado;
};
#endif