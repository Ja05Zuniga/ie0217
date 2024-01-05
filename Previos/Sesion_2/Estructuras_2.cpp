# include <iostream>
using namespace std;

struct persona
{
    char nombre[50];
    int age;
    float salario;
};

int main (){
    persona p1;
    cout<< "Ingrese el nombre completo: ";
    cin.get(p1.nombre,50);
    cout<<"ingrese su edad: ";
    cin>>p1.age;
    cout<< "ingrese su salario: ";
    cin>>p1.salario;

    cout <<"Informacion"<<endl;
    cout << "nombre: "<<p1.nombre<<endl;
    cout <<"Edad: "<<p1.age<<endl;
    cout <<"Salario: "<<p1.salario<<endl;
    return 0;
}