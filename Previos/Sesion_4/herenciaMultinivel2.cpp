#include <iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"Herencia multinivel, multiple y jerarquica de C++"<<endl;
        }
};

//Segunda clase
class B{
    public:
        void display2(){
            cout<<"Herencia multinivel, multiple y jerarquica de C++ Prueba"<<endl;}
};
//Tercera clase: funciona para "recopilar" las clases
class hola : public B, public A {};
int main (){
    hola perro;
    perro.display();
    perro.display2();
    return 0;
}