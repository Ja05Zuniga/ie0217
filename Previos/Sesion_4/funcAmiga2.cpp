#include <iostream>
using namespace std;

class B;

class A{
    public: 
        //Constructor 
        A():numA(12){}
    
    private:
        int numA;
        
        //Declarar la funcion amiga
        friend int add(class A, class B);

};

class B{
    public:
        //Constructor
        B():numB(1){}
    
    private:
        int numB;

        //Declarar la funcion amiga
        friend int add(class A, class B);
};

int add(A objeto1, B objeto2){
    return (objeto1.numA + objeto2.numB);
}

int main(){
    A a;
    B b;

    cout<<"suma: "<< add(a, b);
    return 0;
}