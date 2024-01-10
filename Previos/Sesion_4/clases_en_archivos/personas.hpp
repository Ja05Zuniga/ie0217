#ifndef PERSONAS_H
#define PERSONAS_H

#include <string>

using namespace std;

class Persona {
    private:
        string nombree;
        int edadd;
    public:
        Persona(string nombre, int edad);
        string getNombre();
        int getEdad();
        void setEdad(int edad);
};

#endif
