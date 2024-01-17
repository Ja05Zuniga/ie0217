#include "materialOrdenado.hpp"
#include "libro.hpp"
#include "noticia.hpp"
#include "podcast.hpp"
#include "pelicula.hpp"

string titulo, grupo, tipoMaterial, autor, editorial, genero, estado, resumen, materialRelacionado;
int hojas, opcion;

float precio;

void menuAudio(){
    cout<<"Ingrese el nombre del producto: "<<endl;
    cin>>titulo;
    cout<<"Ingrese el grupo (pelicula o podcast) : "<<endl;
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

void menuLectura(){
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

void menuOpcion(){
    cout << "Que accion desea hacer: "<<endl;
    cout <<"1 para ingresar datos "<<endl;
    cout <<"2 para eliminar Material Por Titulo "<<endl;
    cout <<"3 buscar Material Por Titulo "<<endl;
    cout <<"4 eliminar Material Por Tipo "<<endl;
    cin>>opcion;
}

void tipoDato(){

}

int main() {
    while (1)
    {
        switch (opcion)
        {
        case 1:
            menuLectura();
            MaterialOrdenado<Libro> biblioteca;

            Libro* libro1 = new Libro{ titulo, grupo, tipoMaterial, autor, editorial, genero, estado, hojas, precio, resumen, materialRelacionado};
            biblioteca.agregarMaterial(libro1);
            break;
        case 2:
        
        break;
        
        default:
            break;
        }
    }
}
