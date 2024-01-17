#include "materialAudiovisual.hpp"
MaterialAudiovisual::MaterialAudiovisual(string& t, string& g, string& Material, string& a, string& genero, string& est, 
int h, float p)
{
    this->titulo=t;
    this->grupo=g;
    this->tipoMaterial=Material;
    this->autor=a;
    this->genero=genero;
    this->estado=est;
    this->duracion=h;
    this->precioAudio=p;

}