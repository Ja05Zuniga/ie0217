#include "podcast.hpp"

Podcast::Podcast(string Presumen, string PmaterialRelacionado) : MaterialAudiovisual(titulo, grupo, tipoMaterial, autor, genero, estado, duracion, precioAudio),Presumen(Presumen), PmaterialRelacionado(PmaterialRelacionado){}

/*La funcion recibe el numero de hojas y devuelve si es cota, mediano o grande*/
string Podcast::largoPodcast(){
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
void Podcast :: informacioPodcast(){
    cout<<"informacion sobre el libro"<<endl;
    cout<<"Titulo: "<<titulo<<endl;    
    cout<<"Grupo: "<<grupo<<endl;
    cout<<"Tipo de material: "<<tipoMaterial<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Estado: "<<estado<<endl;
    cout<<"Duracion: "<<duracion<<" minutos"<<". Es considerado "<<largoPodcast()<<endl;
    cout<<"Precio: "<<precioAudio<<endl;
    cout<<"Resumen: "<<Presumen<<endl;
    cout<<"Material relacionado: "<<PmaterialRelacionado<<endl;
}