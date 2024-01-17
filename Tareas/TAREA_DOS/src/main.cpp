#include "materialOrdenado.hpp"
#include "materialPrecio.hpp"
#include <string>
#include "materialOrdenado.hpp"
string titulo, grupo, tipoMaterial, autor, editorial, genero, estado, resumen, parecidos;

int hojas, opcion;

float precio;


    void menu(){
    cout<<"Ingrese el nombre del libro: "<<endl;
    cin>>titulo;
    cout<<"Ingrese el grupo (Noticia o Libro) : "<<endl;
    cin>>grupo;
    cout<<"Ingrese el tipo de material: "<<endl;
    cin>>tipoMaterial;
    cout<<"Ingrese el nombre del autor: "<<endl;
    cin>>autor;
    cout<<"Ingrese el nombre de la editorial: "<<endl;
    cin>>editorial;
    cout<<"Ingrese el genero: "<<endl;
    cin>>genero;
    cout<<"Ingrese el estado (prestado, disponible) "<<endl;
    cin>>estado;
    cout<<"Ingrese la cantidad de hojas: "<<endl;
    cin>>hojas;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio;
    }

int main() {

    MaterialOrdenado miMaterialOrdenado;

    switch (opcion)
    {
    case 1:
        menu();
        miMaterialOrdenado.agregarMaterial(new Libro(resumen, parecidos));
        break;

    case 2:
        menu();
        miMaterialOrdenado.agregarMaterial(new Noticia(resumen, parecidos));
        break;
    default:
        break;
    }
    

    return 0;
}
