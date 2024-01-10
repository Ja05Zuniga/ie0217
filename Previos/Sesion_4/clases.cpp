#include <iostream>
using namespace std;

class Molde {
    public:
        double largo;
        double ancho;
        double alto;

        // El constructor de la clase (lleva el mismo nombre de la clase)
        Molde(double largo_p, double ancho_p, double alto_p) : ancho(ancho_p), largo(largo_p), alto(largo_p){

            //Se puede agregar cierta informacion dentro de los {}
        }
        //'Molde()' se puede escribir tambien de esta forma (revisar main)

        ~Molde(){
            cout << "Hola" << endl;
            }   //El destructor es automáticamente llamado cuando un objeto sale de ámbito

        double calcular_area(){
            return largo*ancho;
        }

        double calcular_volumen(){
            return largo*ancho*alto;

        }
};

int main(){
    Molde pared (2,3,1);

    //'Molde pared;' Escrito de esta forma se tiene que acceder de la siguiente forma:
    //pared.largo=2;
    //pared.ancho=4;
    //pared.alto=5;
    cout<<"Area: "<<pared.calcular_area()<<endl;
    cout<<"Volumen: "<<pared.calcular_volumen()<<endl;
    return 0;
}