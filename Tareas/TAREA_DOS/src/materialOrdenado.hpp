#ifndef MATERIALORDENADO_HPP
#define MATERIALORDENADO_HPP
#include <string>
#include <vector>
using namespace std;

template <class T>
class MaterialOrdenado {
private:
    std::vector<T*> materiales;

public:
    // Destructor para liberar memoria
    ~MaterialOrdenado();

    // Funciones de la clase
    void agregarMaterial(T* nuevoMaterial);
    void eliminarMaterialPorTitulo(const std::string& titulo);
    void eliminarMaterialPorTipo(const std::string& tipo);
    T* buscarMaterialPorTitulo(const std::string& titulo);
    std::vector<T*> buscarMaterialPorTipo(const std::string& tipo);
};

#endif