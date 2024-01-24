/**
 * @file correo.hpp
 * @brief Contiene la definición de la clase Correo.
 */
#include "correo.hpp"
bool Correo::validarCorreo(const std::string &correo)const{
        // Expresión para validar direcciones de correo electrónico
    std::regex correoRegex("^[a-zA-Z0-9][a-zA-Z0-9_.+-]{0,13}[a-zA-Z0-9]@[a-zA-Z]+\\.[a-zA-Z]{2,4}$");
        // Utiliza la expresión regex para validar el formato del correo
        return std::regex_match(correo, correoRegex);
    }