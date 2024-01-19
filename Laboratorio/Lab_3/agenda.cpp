#include "agenda.hpp"

template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    typename std::list<Contacto<T> >::const_iterator it;
    for (it=contactos.begin(); it!=contactos.end(); it++){
        if (it->getTelefono()== contacto.getTelefono()){
            throw std::invalid_argument("Ya existe un contacto con este numero");
        }
    }
    //Se agraga el contacto
    contactos.push_back(contacto);
}

template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto<T> >::const_iterator it;
    for (it=contactos.begin(); it!=contactos.end(); it++){
        if (it->getTelefono()== telefono){
            contactos.erase(it);
            return;
        }
    }
    
    throw std::out_of_range("No se encuebtra un contacto con ese numero");
}

template<typename T>
void Agenda<T>::mostrarContacto()const{
    typename std::list<Contacto<T> >::const_iterator it;
    for (it=contactos.begin(); it!=contactos.end(); it++){
        std::cout<<"Nombre: " <<it->getnombre()<<""
                <<"Telefono: "<<it->getTelefono()<<""
                <<"Email: "<<it->getEmail()<<std::endl;
    }
}

template <typename T>
std::list<Contacto<T> > Agenda<T>::buscarContactos(const std::string& patron) const{
    std::list<Contacto <T> > resultados;
    std::string::size_type pos; 
    typename std::list<Contacto<T>>::const_iterator it;
    for (it =contactos.begin(); it!=contactos.end(); it++){
        pos = it-> getNombre().find(patron);
        if (pos !=std::string::npos)
        {
            // El nombre del contacto contiene el patrón, agrega el contacto a los resultados
            resultados.push_back(*it);
        }
    }
    return resultados;

}