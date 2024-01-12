#include <iostream>
using namespace std;

//se va a guardar data section
int variableGlobal=10;

//text section
void funcionGlobal(){
    //.data section
    static int variableLocalEstatica = 5;

    //stack section
    int variableLocal=20;

cout<<"Variable global "<<variableGlobal<<endl;
cout<<"Variable Local Estatica "<<variableLocalEstatica<<endl; 
cout<<"Variable local "<<variableLocal<<endl;
}

int main (){

    //stack
    int variableLocalMain=15;

    funcionGlobal();

    cout<<"variable local en main "<<variableLocalMain<<endl;

    //heap section
    int* variableDinamica = new int;
    *variableDinamica = 25;
    cout<<"Variable dinamica "<<*variableDinamica<<endl;

    delete variableDinamica;

    return 0;
}