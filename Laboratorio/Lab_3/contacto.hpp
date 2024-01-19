#ifndef CONTACTO_HPP
#define CONTACTO_HPP
#include <iostream>

template <typename T>
class Contacto{
    public:
    Contacto(T nombre, T telefono, T email);
    T getnombre() const; //const porque no cambia 
    T getTelefono() const;
    T getEmail() const;

    private:
    T nombre;
    T telefono;
    T email;
};

#include "contacto.cpp"
#endif //CONTACTO_HPP