#include <iostream>
#include "personas.hpp"

using namespace std;

int main(){
    Persona p("Juan", 25);
    cout<<"Nombre: "<< p.getNombre()<<endl;
    cout<<"Edad"<<p.getEdad() << endl;

    p.setEdad(26);
    cout<<"nueva edad: "<< p.getEdad()<<endl;
    return 0;
}