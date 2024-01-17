#ifndef LIBRO__HPP
#define LIBRO__HPP
#include "materialLectura.hpp"

class Libro : public MaterialLectura {
    public:
        Libro(string& titulo, string& grupo, string& tipoMaterial, string& autor, string& editorial, string& genero, string& estado, int hojas, float precio,
        string& resumen, string& materialRelacionado);
        
        /*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
        string hojasLibro();

        /*Funcion encargada de imprimir la informacion necesaria*/
        void informacioLibro();
    
        string resumen;
        string materialRelacionado;
};
#endif