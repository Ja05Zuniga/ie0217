#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class MaterialAudiovisual{
    protected:
        string titulo;        //titulo del libro
        string grupo;        //Pertenece audiovisual
        string tipoMaterial; // ¿Pelicula o podcast?
        string autor;         //autor
        string genero;        //tipo de genero
        string estado;       //¿disponible, prestado, reservado?
        int duracion;          //duracion de pelicula-podcast
        float precio;       //precio
    public:
        MaterialAudiovisual(string& titulo, string& grupo, string& tipoMaterial, string& autor, 
     string& genero, string& estado, int hojas, float precio);
};

#endif