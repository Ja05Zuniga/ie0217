#include <iostream>
using namespace std;

class Animal {
    // public: Todas las demás clases y funciones pueden acceder a los elementos.
    public:
        void setEdad (int age){
            edad = age; 
            }

        int getEdad(){
            return edad;
        }
    
    //private: No se puede acceder a los elementos fuera de la clase en la que están declarados, 
    //excepto por clases y funciones amigas.
    private:
        int edad;
    
    //protected: Los elementos son como los privados, excepto que las clases-
    //derivadas pueden acceder a ellos.
    protected:
        string nombre;

};

class Perro : public Animal {
    public:
        void setNombre(string n){
            nombre = n;
        }
        string getNombre(){
            return nombre;
        }
};

int main(){
    Perro miperro;
    miperro.setNombre("Shumi");
    miperro.setEdad(2);
    cout<<"se llama "<<miperro.getNombre()<<endl;
    cout<<"Tiene "<<miperro.getEdad()<<" de edad"<<endl;
    return 0;
}