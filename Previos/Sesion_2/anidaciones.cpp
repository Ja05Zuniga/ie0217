#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "Ingrese un numero entero: ";
        cin >> num;

    if (num != 0 ){
        if (num >= 0 ){
            cout << "El numero es positivo: "<<endl;
        }
        else {
            cout <<"El numero es negativo:" <<endl;

        }
    }
    else {
        cout << "El numero no es negativo ni positivo "<<endl;
    }
    cout << "Hola"<<endl;
    
    return 0;
}