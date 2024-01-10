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
        friend class B;

};

class B{
    public:
        //Constructor
        B():numB(1){}

        A objeto;

        int add(){
            return (objeto.numA + numB); 
    }
    
    private:
        int numB;

        

};


int main(){
    B b;
    cout<<"suma: "<< b.add();
    return 0;
}