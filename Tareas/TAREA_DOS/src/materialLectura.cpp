#include "materialLectura.hpp"

MaterialLectura::MaterialLectura(string& t, string& g, string& Material, string& a, string& e, string& genero, 
string& est, int h, float p)
{
    this->titulo=t;
    this->grupo=g;
    this->tipoMaterial=Material;
    this->autor=a;
    this->editorial=e;
    this->genero=genero;
    this->estado=est;
    this->hojas=h;
    this->precio=p;

}

