#include "motoCoche.hpp"

int main(){
    MotoCoche miMotoCoche(60,2,true);
    miMotoCoche.abrirPuertas();
    miMotoCoche.usarCasco();
    miMotoCoche.Coche::acelerar();
    return 0;
}