#include <iostream>
using namespace std;

class Base {
    public: 
        void print(){
            cout<<"Imprimir"<<endl;
        }
};

class Derivado : public Base {
    public:
        void print(){
            cout<<"Imprimir la derivada"<<endl;
        }
};

int main(){
    Derivado s1, s2;
    s1.print();
    
    //poder usar las funciones de base
    s2.Base::print();
    return 0;
}