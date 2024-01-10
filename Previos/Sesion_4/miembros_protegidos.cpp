#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
        string color;

    protected: 
        string type;

    public:
        void run(){cout<<"correr: "<<endl;}
        void comer(){cout<<"Poder comer"<<endl;}
        void dormir(){cout<<"Dormir"<<endl;}
        void setColor(string slr){color=slr;}
        string getColor(){return color;}
};

class Dog : public Animal {
    public:
        void run(){cout<<"Correr del derivado"<<endl;}
        void setType(string tp){type=tp;}
        void displayInfo(string c){
            cout<<"Yo soy "<<type<<endl;
            cout<<"Mi color es"<<c<<endl;
        }
     void ladrar(){cout<<"puede ladrar"<<endl;}
};

int main(){
    Dog perro;
    perro.run();
    perro.comer();
    perro.dormir();
    perro.setColor("azul");

    perro.ladrar();
    perro.setType("La pesadilla");
    
    //no se puede imprimir porque color está en privado
    perro.displayInfo(perro.getColor());
    return 0;
}