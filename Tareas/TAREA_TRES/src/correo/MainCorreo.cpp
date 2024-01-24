/**
 * @file main.cpp
 * @brief Contiene el punto de entrada principal del programa.
 */
#include "correo.hpp" // Incluye la declaración de la clase Correo
#include <iostream>


int main() {
    // Instancia de la clase Correo para validar direcciones de correo electrónico.
    Correo validador;

    // Variable para almacenar la dirección de correo que ingresa el usuario.
    std::string correoValido;

    // Solicitar al usuario que ingrese la dirección de correo
    std::cout<<"Ingrese el correo\n"<<std::endl;
    std::cin>>correoValido;

    // Validar la dirección de correo utilizando la instancia de Correo
    bool resultadoValido = validador.validarCorreo(correoValido);

    // Manejar excepciones en caso de una entrada no válida
    try
    {
        // Si la dirección de correo es válida, mostrar un mensaje de éxito
       if (resultadoValido){
        std::cout<<"'" << correoValido <<"'"<< " Se ha ingresado correctamente" << std::endl;
    }else {  
        // Si la dirección de correo no es válida, lanzar una excepción
        throw std::runtime_error("Entrada invalida. Recuerde seguir el formato: example@ejemplo.exemple");}
    }catch(const std::exception& e){

        // Imprimir el mensaje de error en la consola de errores
        std::cerr << e.what() << '\n';}
    return 0;
}