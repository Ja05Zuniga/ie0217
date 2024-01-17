// materialPrecio.hpp
#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP

#include "libro.hpp"
#include "noticia.hpp"
#include "pelicula.hpp"
#include "podcast.hpp"

class MaterialPrecio : public Libro, public Noticia, public Pelicula, public Podcast {
public:
    MaterialPrecio(const string& titulo, const string& tipoMaterial, float precio);

    float getPrecio() ;
    void getTitle();
    void getTipoMaterial();

    // Función para imprimir el material
    void imprimirMaterial() ;

    // Función para ordenar el material por precio de forma ascendente
    static void ordenarPorPrecioAscendente(MaterialPrecio** materialArray, std::size_t size);

    // Función para ordenar el material por precio de forma descendente
    static void ordenarPorPrecioDescendente(MaterialPrecio** materialArray, std::size_t size);

private:
    double precio;
};

#endif
