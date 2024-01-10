#include <iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"Herencia multinivel, multiple y jerarquica de C++"<<endl;
        }
};

class B:public A{};
class C:public A {};

int main (){
    B perro;
    C gato;

    gato.display();
    perro.display();
    return 0;
}