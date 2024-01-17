#include "libro.hpp"

Libro::Libro(string r, string materialR) : MaterialLectura(titulo, grupo, tipoMaterial, autor, editorial, genero, estado, hojas,precio),resumenL(r), materialRelacionadoL(materialR) {}

/*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
string Libro::hojasLibro(){
    string a;
    
    if (hojas<=100){
        a = "Corto";
    }
    else if (100<=hojas<=200) {
        a = "Mediano";
    }
    else{
        a = "Grande";
    }

    return a;

}
/*Funcion encargada de imprimir la informacion necesaria*/
void Libro :: informacioLibro(){
    cout<<"informacion sobre el libro"<<endl;
    cout<<"Titulo: "<<titulo<<endl;    
    cout<<"Grupo: "<<grupo<<endl;
    cout<<"Tipo de material: "<<tipoMaterial<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Editorial: "<<editorial<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Estado: "<<estado<<endl;
    cout<<"Cantidad de hojas: "<<hojas<<". Es considerado "<<hojasLibro()<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Resumen: "<<resumenL<<endl;
    cout<<"Material relacionado: "<<materialRelacionadoL<<endl;
}