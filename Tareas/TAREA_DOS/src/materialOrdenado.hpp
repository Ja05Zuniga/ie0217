#ifndef MATERIALORDENADO_HPP
#define MATERIALORDENADO_HPP

#include "libro.hpp"
#include "noticia.hpp"
#include "pelicula.hpp"
#include "podcast.hpp"

class MaterialOrdenado : public Libro, public Pelicula, public Noticia, public Podcast{
    public:
    //constructor 
    MaterialOrdenado(string& titulo, string& grupo, string& tipoMaterial, string& autor, 
    string& editorial, string& genero, string& estado, int hojas, float precio, string& resumen, string& materialRelacionado);
    
    // Función para añadir un material
    void agregarMaterial(MaterialLectura* material);

     // Función para eliminar un material por título
    void eliminarMaterialPorTitulo(const string& titulo);

    // Función para eliminar un material por tipo (libro o noticia)
    void eliminarMaterialPorTipo(const string& tipo);

    // Función para buscar material por título
    MaterialLectura* buscarMaterialPorTitulo(const string& titulo) const;

    private:
    // Nodo de la lista enlazada
    struct Nodo {
        MaterialLectura* dato;
        Nodo* siguiente;
    };

    // Puntero al frente de la cola
    Nodo* frente;

    // Puntero al final de la cola
    Nodo* final;

};

#endif