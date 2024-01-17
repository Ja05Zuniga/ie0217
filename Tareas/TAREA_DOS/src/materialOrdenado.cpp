#include "materialOrdenado.hpp"

#include <algorithm>

template <class T>
MaterialOrdenado<T>::~MaterialOrdenado() {
    for (T* material : materiales) {
        delete material;
    }
}

template <class T>
void MaterialOrdenado<T>::agregarMaterial(T* nuevoMaterial) {
    materiales.push_back(nuevoMaterial);
}

template <class T>
void MaterialOrdenado<T>::eliminarMaterialPorTitulo(const std::string& titulo) {
    auto it = std::remove_if(materiales.begin(), materiales.end(),
        [titulo](T* material) { return material->titulo == titulo; });

    for (auto i = it; i != materiales.end(); ++i) {
        delete *i;
    }

    materiales.erase(it, materiales.end());
}

template <class T>
void MaterialOrdenado<T>::eliminarMaterialPorTipo(const std::string& tipo) {
    auto it = std::remove_if(materiales.begin(), materiales.end(),
        [tipo](T* material) { return material->tipo == tipo; });

    for (auto i = it; i != materiales.end(); ++i) {
        delete *i;
    }

    materiales.erase(it, materiales.end());
}

template <class T>
T* MaterialOrdenado<T>::buscarMaterialPorTitulo(const std::string& titulo) {
    auto it = std::find_if(materiales.begin(), materiales.end(),
        [titulo](T* material) { return material->titulo == titulo; });

    if (it != materiales.end()) {
        return *it;
    } else {
        return nullptr;
    }
}

template <class T>
std::vector<T*> MaterialOrdenado<T>::buscarMaterialPorTipo(const std::string& tipo) {
    std::vector<T*> resultados;
    for (T* material : materiales) {
        if (material->tipo == tipo) {
            resultados.push_back(material);
        }
    }
    return resultados;
}

// Creación de instancias explícitas para la clase Libro
template class MaterialOrdenado<Libro>;

// Creación de instancias explícitas para la clase Noticia
template class MaterialOrdenado<Noticia>;

// Creación de instancias explícitas para la clase Pelicula
template class MaterialOrdenado<Pelicula>;

// Creación de instancias explícitas para la clase Podcast
template class MaterialOrdenado<Podcast>;