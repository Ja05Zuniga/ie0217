#include "personas.hpp"
using namespace std;

Persona::Persona(string nombre, int edad){
    this->nombree = nombre;
    this->edadd = edad;
}

string Persona:: getNombre(){
    return nombree;
}

int Persona::getEdad(){
    return edadd;
}

void Persona::setEdad(int edad){
    this->edadd = edad;
}
