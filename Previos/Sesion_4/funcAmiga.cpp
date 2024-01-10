#include <iostream>
using namespace std;

class Distancia {
    private:
        int metros;
        //Funcion amiga
        friend int addFire(Distancia);

    public:
        //Constructor
        Distancia(): metros(0) {}

};

int addFire(Distancia d){
    d.metros+=5;
    return d.metros;
}

int main(){
    Distancia D;
    cout<<"Distancia: "<<addFire(D);
    return 0;
}