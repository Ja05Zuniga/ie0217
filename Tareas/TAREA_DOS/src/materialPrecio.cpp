// materialPrecio.cpp
#include "materialPrecio.hpp"

MaterialPrecio::MaterialPrecio(const string& titulo, const string& tipoMaterial, float precio)
    : Libro(titulo, tipoMaterial), Noticia(titulo, tipoMaterial), Pelicula(titulo, tipoMaterial), Podcast(titulo, tipoMaterial), precio(precio) {}

float MaterialPrecio::getPrecio()  {
    return precio;
}

void MaterialPrecio::ordenarPorPrecioAscendente(MaterialPrecio** materialArray, std::size_t size) {
    bool swapped;

    do {
        swapped = false;

        for (std::size_t i = 0; i < size - 1; ++i) {
            if (materialArray[i]->getPrecio() > materialArray[i + 1]->getPrecio()) {
                std::swap(materialArray[i], materialArray[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    // Imprimir el material ordenado
    for (std::size_t i = 0; i < size; ++i) {
        materialArray[i]->imprimirMaterial();
    }
}

void MaterialPrecio::ordenarPorPrecioDescendente(MaterialPrecio** materialArray, std::size_t size) {
    bool swapped;

    do {
        swapped = false;

        for (std::size_t i = 0; i < size - 1; ++i) {
            if (materialArray[i]->getPrecio() < materialArray[i + 1]->getPrecio()) {
                std::swap(materialArray[i], materialArray[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    // Imprimir el material ordenado
    for (std::size_t i = 0; i < size; ++i) {
        materialArray[i]->imprimirMaterial();
    }
}
