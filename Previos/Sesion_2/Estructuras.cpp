# include <iostream>
# include <cstring>

using namespace std;

struct libros
{
    char titulo[50];
    char autor[50];
    char tema[100];
    int id_libro;
};

int main (){
    // Se declaran las estructuras
    struct libros libro1;
    struct libros libro2;

//Caracteristicas del primer libro
    strcpy(libro1.titulo, "Ser feliz");
    strcpy(libro1.autor, "Juan Perez");
    strcpy(libro1.tema, "C++ programing");
    libro1.id_libro=12;

//Caracteristicas del segundo libro
    strcpy(libro2.titulo, "Ser feliz volumen 2");
    strcpy(libro2.autor, "Juan Perez");
    strcpy(libro2.tema, "C++ programing");
    libro2.id_libro=13;

//Imprimir la informacion del primer libro
    cout<<"libro 1\n";
    cout<<"Titulo: "<<libro1.titulo<<endl;
    cout<<"Autor: "<<libro1.autor<<endl;
    cout<<"Tema: "<<libro1.tema<<endl;
    cout<<"id: "<<libro1.id_libro<<endl;

//Imprimir la informacion del segundo libro
    cout<<"libro 2\n";
    cout<<"Titulo: "<<libro2.titulo<<endl;
    cout<<"Autor: "<<libro2.autor<<endl;
    cout<<"Tema: "<<libro2.tema<<endl;
    cout<<"id: "<<libro2.id_libro<<endl;
}