# include <iostream>
using namespace std;

void test(){
    static int var = 0;
    ++var;
    cout<<var<<endl;
}

int main(){
    //La variable existe mientras el programa se ejecuta y se elimina cuando el programa acaba
    //se ejecuta las veces que la funcion sea llamada
    test();
    test();
    test();
}