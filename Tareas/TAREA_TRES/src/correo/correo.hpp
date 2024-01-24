#ifndef CORREO_HPP
#define CONTACTO_HPP
#include <regex>

/**
 * @class Correo
 * @brief Clase para validar direcciones de correo electrónico.
 */

class Correo {
public:
/**
     * @brief Valida una dirección de correo electrónico según ciertas restricciones.
     *
     * La dirección de correo electrónico debe cumplir con las siguientes condiciones:
     * 1. El nombre puede contener letras, números, puntos (.) y guiones (-), pero no
     *    debe comenzar ni terminar con un punto o guion.
     * 2. El nombre no debe tener más de 15 letras, números, puntos y guiones.
     * 3. El dominio SOLO puede contener letras y debe tener al menos un punto al final.
     * 4. La extensión puede contener solo letras y debe tener entre 2 y 4 caracteres.
     * 5. No se permiten caracteres especiales adicionales en ninguna parte de la dirección de correo electrónico.
     *
     * @param correo La dirección de correo electrónico a validar.
     * @return true si la dirección de correo es válida, false en caso contrario.
     */
    bool validarCorreo(const std::string &correo)const;
    
};

#endif