#include <iostream>
using namespace std;

class Fraccion{
    int numerador, denominador;
    public:
        Fraccion(int n, int d) : numerador(n), denominador(d){}

        Fraccion operator+ (const Fraccion &f){
            Fraccion resultado(
                numerador * f.denominador + f.numerador * denominador, denominador*f.denominador
            );
            return resultado;
        }
        void imprimir (){
            cout<< numerador << "/"<<denominador <<endl;
        }
};

int main (){
    Fraccion s1(2,3);
    Fraccion s2(4,2);
    Fraccion s3 = s1+s2;
    s3.imprimir();
    return 0;
}