#include "funciones.hpp"
#include <string>

void menu(){
        std::cout << "\n---Menu---\n";
        std::cout << "\n1. Agregar empleados: \n";
        std::cout << "\n2. Listar empleados: \n";
        std::cout << "\n3. Eliminar empleados\n";
        std::cout << "\n4. Salir\n";
}

void procesarOpcion(Empleado empleados[], int& numEmpleados){
        int opcion;
        std::cout<<"Ingrese una opcion: ";
        std::cin>>opcion;

        switch (opcion) {
        case 1: //Agregar empleados
            agregarEmpleado(empleados, numEmpleados);
            break;

        case 2: // Lista de empleados
            listarEmpleado(empleados, numEmpleados);
            break;

        case 3: //Eliminar un empleado
            eliminarEmpleado(empleados, numEmpleados);
            break;

        case 4: //Salir del programa
            std::cout<<"Saliendo del programa...\n";
            exit(0);

        default:
            std::cout <<"Opcion no valida...\n";
        }
    }

    void agregarEmpleado(Empleado empleados[], int& numEmpleados){
        if (numEmpleados < MAX_EMPLEADOS){
            Empleado nuevoEmpleado;
            nuevoEmpleado.id=numEmpleados+1;
            std::cout<<"Ingrese el nombre del empledo";
            std::cin>>nuevoEmpleado.nombre;

            std::cout<<"Ingrese el salario del empledo";
            std::cin>>nuevoEmpleado.salario;
            empleados[numEmpleados++]=nuevoEmpleado;
            std::cout<<"Ingresado con exito";
        
        }else{
                std::cout<<"No se puede agregar más";
            }
    }

    void listarEmpleado(Empleado empleados[], int& numEmpleados){
        std::cout<<"Lista de empleados\n";
        for (int i=0; i<numEmpleados; ++i){
            std::cout<<"ID"<<empleados[i].id<<", nombre"<<
            empleados[i].nombre<<"salario"<<empleados[i].salario<<"\n";
        }
    }

    void eliminarEmpleado(Empleado empleados[], int& numEmpleados){
        int idEliminar;
        std::cout<<"Ingrese el ID a eliminar";
        std::cin>>idEliminar;

        for(int i=0; i<numEmpleados; ++i){
            if (empleados[i].id==idEliminar){
                for (int j=i; i<numEmpleados-1; ++j){
                    empleados[j]=empleados[j+1];
                }
            --numEmpleados;
            std::cout<<"Empleado eliminado.\n";
            return;
            }
        }
    }