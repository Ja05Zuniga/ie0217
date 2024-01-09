#include "juego.hpp"
#include <string>
#include <cstdlib>   // Necesario para rand() y srand()
#include <ctime>     // Necesario para time()
using namespace std;

void menu(){
    cout<<"Seleccione la dificultad "<<endl;
    cout << "   1.Facil"<<endl;
    cout << "   2.Dificil"<<endl;
    cout << "   3.Salir del juego"<<endl;

}

void elegirOpcion (){
    int a;
    int b;
    int opcion;

    cout<<"Ingrese un numero entero del primer (menor) intervalo: " << endl;
    cin >> a;

    cout<<"Ingrese un numero entero del segundo (mayor) intervalo: " << endl;
    cin >> b;

    //Se selecciona la dificultad
    menu();
    cout<<"Ingrese la dificultad: "<<endl;
    cin>>opcion;

    //Los intentos del jugador
    int c = int((b-a)/3);

    //El numero a ingresar para ganar
    int numeroA = generarAleatorio(a, b);
    cout<<"Tienes " <<c<<" intentos"<<endl;
    cout<<"Es " <<numeroA<<" pero no le digas a nadie..."<<endl;
   
    switch (opcion)
    {
    case 1:
        //Dificultad facil
        dificultadFacil(c, numeroA);
        exit(1);
    
    case 2:
        dificultadDificil(c, numeroA);
        exit(1);

    case 3:
        cout << "Saliendo del juego"<<endl;
        exit(1);

    default:
        cout << "Ingrese un valor valido" <<endl;
        break;
    }
}

// Función que devuelve un valor aleatorio dentro del rango [min, max]
int generarAleatorio(int a, int b) {
    // Inicializa la semilla para rand() utilizando la hora actual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Calcula el rango y genera un valor aleatorio dentro de ese rango
    int rango = b - a + 1;
    int valorAleatorio = std::rand() % rango + a;
    return valorAleatorio;
}

int dificultadFacil(int b, int numeroA){
    for(int i=0; i<=b-1;++i){
        int numero;
        cout<<"Ingrese el numero: "<<endl;
        cin >> numero;

        if (numeroA == numero){
        cout<<"Felicidades has acertado el numero :)" << endl;
        exit(1);
        }
        
        else if (numeroA < numero) {
        cout << "PISTA: el numero es menor :)" << endl;
        }

        else{cout<< "PISTA: el numero es mayor :)" <<endl;}
    }
    cout<<"Perdiste"<<endl;

}

int dificultadDificil(int b, int numeroA){
    for(int i=0; i<=b-1;++i){
        int numero;
        cout<<"Ingrese el numero: "<<endl;
        cin >> numero;

        if (numeroA == numero){
            cout<<"Felicidades has acertado el numero :)" << endl;
            exit(1);
            }

            else if (numeroA - numero==1 || numeroA - numero==-1 ) {
            cout << "Hirviendo" << endl;
            }

            else if (numeroA - numero ==2 || numeroA - numero == -2) {
            cout << "caliente" << endl;
            }

              else if (numeroA - numero==3 || numeroA - numero==-3) {
            cout << "frio" << endl;
            }
         
              else if (numeroA - numero>=4 || numeroA - numero>=-4 || numeroA - numero<=-4 || numeroA - numero<=4) {
            cout << "Congelado" << endl;
            }

    }
    cout<<"Perdiste"<<endl;
}
