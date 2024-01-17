#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class MaterialAudiovisual{
    public:
        string titulo;        //titulo del libro
        string grupo;        //Pertenece audiovisual
        string tipoMaterial; // ¿Pelicula o podcast?
        string autor;         //autor
        string genero;        //tipo de genero
        string estado;       //¿disponible, prestado, reservado?
        int duracion;          //duracion de pelicula-podcast
        float precioAudio;       //precio

        MaterialAudiovisual(string t, string g, string Material, string a, string genero, string est, int h, float p)
        : titulo(t), grupo(g), tipoMaterial(Material), autor(a), genero(genero), estado(est), duracion(h),
        precioAudio(p){}
};

#endif