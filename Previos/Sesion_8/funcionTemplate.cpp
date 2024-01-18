#include <iostream>
using namespace std;

template <typename T/*El parametro T*/>
T add (T num1, T num2){ /*add es el nombre de la funcion*/
    return (num1 + num2);
}

int main (){
    int result;
    double result2;
    //Uso para el caso int
    result=add<int>(2,3);
    cout<<"2 + 3 = "<<result<<endl;
    //Solo se tiene que declarar una vez y se puede usar para cualquier tipo de dato

    //Uso para el caso double
    result2=add<double>(2.2, 3.3);
    cout<<"2.2 + 3.3 = "<<result2<<endl;
    return 0;
}