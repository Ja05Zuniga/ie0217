
#include <iostream> 
using namespace std;
int main(){
    int var1 = 45;
    int var2 = 23;
    int var3 = 123;

    // print de las direcciones de cada variable
    cout << "Direccion de var1: "<< &var1 << endl;
    cout<<"Direccion de var2: " << &var2 << endl;
    cout << "Direcicion de var3: " << &var3 << endl;
}