#include <iostream>
using namespace std;

class Animal {
    public:
        void eat(){
            cout<<"Puede comer"<<endl;
        }

        void slepp(){
            cout<<"Puede comer"<<endl;
        }
};

class Dog : public Animal {
    public:
        void ladrar (){
            cout<<"Puede ladrar"<<endl;
        }
};

int main (){
    Dog perro1;
    perro1.eat();
    perro1.ladrar();
    perro1.ladrar();
    return 0;
}