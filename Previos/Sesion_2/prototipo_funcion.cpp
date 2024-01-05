# include <iostream>
using namespace std;

// se declara 'arriba'
int add (int , int );

int main (){
    int n=12;
    int m=43;
    cout<<n<<"+"<<m<<"="<<add(n, m)<<endl;
    return 0;
}

//Se define la funcion
int add (int a, int b){
    return (a+b);
}