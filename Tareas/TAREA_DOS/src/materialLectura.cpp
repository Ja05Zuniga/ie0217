#include "materialLectura.hpp"

MaterialLectura::MaterialLectura(string& titulo, string& grupo, string& tipoMaterial, string& autor, 
    string& editorial, string& genero, string& estado, int hojas, float precio)
{
    this->titulo=titulo;
    this->grupo=grupo;
    this->tipoMaterial=tipoMaterial;
    this->autor=autor;
    this->editorial=editorial;
    this->genero=genero;
    this->estado=estado;
    this->hojas=hojas;
    this->precio=precio;

}

