# include <iostream>
# include "funciones.hpp"

int main(){
    Empleado empleados[MAX_EMPLEADOS];
    int numEmpleados = 0;

    while (1){
        menu();
        procesarOpcion(empleados, numEmpleados);
    }
    return 0;
}