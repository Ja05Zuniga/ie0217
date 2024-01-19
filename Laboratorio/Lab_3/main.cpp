#include "agenda.hpp"
#include "contacto.hpp"
#include <iostream>

int main (){
    //Objetos de la clase contacto
    Contacto<std::string> contacto1("JunaMora", "12345678", "hola.com");
    Contacto<std::string> contacto2("WilliamWalker", "12345612", "Wilo.com");
    Contacto<std::string> contacto3("JuanSantamaria", "86345678", "adiosMEson.com");
//Agenda
Agenda<std::string> agenda;

//Agregar contactos a la agenda
try
{
    agenda.agregarContacto(contacto1);
    agenda.agregarContacto(contacto2);
    agenda.agregarContacto(contacto3);

}
catch(const std::exception& e)
{
    std::cerr <<"Error al agregar contacto"<< e.what() << '\n';
}
//Mostrar contactos
std::cout<<"Contactos en la agenda"<<std::endl;
agenda.mostrarContacto();

//Eliminar un contacto
try
{
    agenda.eliminarContacto("12345678");
}
catch(const std::exception& e)
{
    std::cerr <<"Error al eliminar el contacto" <<e.what() << '\n';
}
//Mostrar contactos
std::cout<<"Contactos en la agenda"<<std::endl;
agenda.mostrarContacto();


 std::string patronBusqueda = "Juan";  // Puedes cambiar el patrón según tus necesidades
std::list<Contacto<std::string>> resultados = agenda.buscarContactos(patronBusqueda);


}