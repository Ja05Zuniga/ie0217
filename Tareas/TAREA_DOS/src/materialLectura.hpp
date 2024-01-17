#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class MaterialLectura{
    public:
        string titulo;        //titulo del libro
        string grupo;        //Pertenece a lectura o audiovisual
        string tipoMaterial; //¿Libro o noticia? o ¿Pelicula o podcast?
        string autor;         //autor
        string editorial;     //nombre de la editorial
        string genero;        //tipo de genero
        string estado;       //¿disponible, prestado, reservado?
        int hojas;          //numero de hojas o duracion de pelicula-podcast
        float precio;       //precio

        MaterialLectura(string& t, string& g, string& Material, string& a, string& e, string& genero, string& est, int h, float p);
};

#endif