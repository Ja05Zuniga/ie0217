#include <iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"Base publico"<<endl;
        }
};

class Derivado:public Base{
    public:
        void print(){
            cout<<"Funcion derivada"<<endl;
        }
};

int main(){
    Derivado derivado;
    Base*base1=&derivado;

    base1->print();

    return 0;
}