#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        int x;
    
    protected:
        int y;
    
    private:
        int z;
};

class publicDerivado:public Base{
    //x es publico
    // y es protecte
    // z no es accesible por publicDerivado
};

class protecteDerivado: protected Base{
    //x es protecte
    //y es protecte
    //z no es accesible por protecteDerivado
};

class privateDerivado:private Base{
    //x es privado
    //y es privado
    //z no es accesible por privateDerivado

};
