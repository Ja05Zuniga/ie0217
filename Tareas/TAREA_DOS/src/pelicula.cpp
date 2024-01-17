#include "pelicula.hpp"

Pelicula::Pelicula(string& titulo, string& grupo, string& tipoMaterial, string& autor, string& editorial, string& genero, string& estado, int hojas, float precio, string& resumen, string& materialRelacionado) 
: MaterialAudiovisual(titulo, grupo, tipoMaterial, autor, genero, estado, duracion, precio),resumen(resumen), materialRelacionado(materialRelacionado){}

/*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
string Pelicula::largoPelicula(){
    string a;
    if (duracion<=90){
        a = "Corto";
        return a;
    }
    else if (90<=duracion<=150) {
        a = "Mediano";
        return a;
    }
    else{
        a = "Larga";
        return a;
    }

}

/*Funcion encargada de imprimir la informacion necesaria*/
void Pelicula :: informacioPelicula(){
    cout<<"informacion sobre el libro"<<endl;
    cout<<"Titulo: "<<titulo<<endl;    
    cout<<"Grupo: "<<grupo<<endl;
    cout<<"Tipo de material: "<<tipoMaterial<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Estado: "<<estado<<endl;
    cout<<"Duracion: "<<duracion<<" minutos"<<". Es considerado "<<largoPelicula()<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Resumen: "<<resumen<<endl;
    cout<<"Material relacionado: "<<materialRelacionado<<endl;
}