#include "materialOrdenado.hpp"

MaterialOrdenado::MaterialOrdenado() : frente(nullptr), final(nullptr), Noticia(Nresumen, NmaterialRelacionado), 
Libro(resumenL, materialRelacionadoL), Pelicula(resumenP, materialRelacionadoP), Podcast(Presumen, PmaterialRelacionado){}

MaterialOrdenado::~MaterialOrdenado() {
    while (frente != nullptr) {
        Nodo* temp = frente;
        frente = frente->siguiente;
        delete temp->dato;
        delete temp;
    }
}

// Función para añadir un material
void MaterialOrdenado::agregarMaterial(MaterialLectura* material) {
    Nodo* nuevoNodo = new Nodo{material, nullptr};

    if (frente == nullptr) {
        frente = nuevoNodo;
        final = nuevoNodo;
    } else {
        final->siguiente = nuevoNodo;
        final = nuevoNodo;
    }
}

// Función para eliminar un material por título
void MaterialOrdenado::eliminarMaterialPorTitulo(const string& titulo) {
    Nodo* prev = nullptr;
    Nodo* current = frente;

    while (current != nullptr) {
        if (current->dato->titulo == titulo) {
            if (prev == nullptr) {
                frente = current->siguiente;
            } else {
                prev->siguiente = current->siguiente;
            }

            if (current == final) {
                final = prev;
            }

            delete current->dato;
            delete current;
            return;
        }

        prev = current;
        current = current->siguiente;
    }
}
// Función para buscar material por título
MaterialLectura* MaterialOrdenado::buscarMaterialPorTitulo(const string& titulo) const {
    Nodo* current = frente;

    while (current != nullptr) {
        if (current->dato->titulo == titulo) {
            return current->dato;
        }

        current = current->siguiente;
    }

    return nullptr;
}

// Función para eliminar un material por tipo (libro o noticia)
void MaterialOrdenado::eliminarMaterialPorTipo(const string& tipo) {
    Nodo* prev = nullptr;
    Nodo* current = frente;

    while (current != nullptr) {
        if (current->dato->tipoMaterial == tipo) {
            if (prev == nullptr) {
                frente = current->siguiente;
            } else {
                prev->siguiente = current->siguiente;
            }

            if (current == final) {
                final = prev;
            }

            delete current->dato;
            delete current;
            return;
        }

        prev = current;
        current = current->siguiente;
    }
}