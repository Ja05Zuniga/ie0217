#include "juego.hpp"
#include <string>
#include <cstdlib>   // Necesario para rand() y srand()
#include <ctime>     // Necesario para time()
using namespace std;

void menu(){
    cout<<"--- MENU DEL JUEGO ---"<<endl;
    cout<<"¿En qué tipo de dificultad desea jugar? "<<endl;
    cout << "   1.Facil"<<endl;
    cout << "   2.Dificil"<<endl;
    cout << "   3.Salir del juego"<<endl;

}

int numero1;
int numero2;

void elegirOpcion (){
    int opcion;
    cout<<"Ingrese un numero entero del primer (menor) intervalo: " << endl;
    cin >> numero1;

    cout<<"Ingrese un numero entero del segundo (mayor) intervalo: " << endl;
    cin >> numero2;

    cout<<"Ingrese la dificultad: "<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        int dificultadFacil(int numeroA);
        break;
    
    case 2:
        int dificultadDificil(int numeroA);
        break;

    case 3:
        cout << "Saliendo del juego"<<endl;
        exit(1);
        break;
    
    default:
        cout << "Ingrese un valor valido" <<endl;
        break;
    }
}

// Función que devuelve un valor aleatorio dentro del rango [min, max]
int generarAleatorio(int min, int max) {
    // Inicializa la semilla para rand() utilizando la hora actual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Calcula el rango y genera un valor aleatorio dentro de ese rango
    int rango = max - min + 1;
    int valorAleatorio = std::rand() % rango + min;
    return valorAleatorio;
}

// contiene el numero generado aleatoreamente
int numero = generarAleatorio(numero1, numero2);

// contiene el numero de oportunidades
int num  = int((numero2 - numero1) / 3);

int dificultadFacil(int numeroA){

    if (numeroA == numero){
        cout<<"Felicidades has acertado el numero :)" << endl;
    }

    else if (numeroA < numero) {
        cout << "¡PISTA: el numero es mayor :)" << endl;
    }

    else{cout<< "PISTA: el numero es menor :)"<<endl;}

}