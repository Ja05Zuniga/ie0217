#include <iostream>
using namespace std;

void numero (int n1, float n2){
    cout << "El numero entero es: "<< n1;
    cout << "\nEl nuemero flotante es: "<<n2;
}

int main (){
    int n1;
    float n2;
    numero (2, 3.1);
    return 0;
}