#include <iostream>
using namespace std;

// Se define la clase con varios parametros 
        //this
template <class T, class U, class V = char>//V se toma como char si no se especifica cuando se llama 
class ClassTemplate {
    private: 
        T var1;
        U var2;
        V var3;

    public:
                    //Los tipos tambien tienen que coinsidir con los de arriba //this
        ClassTemplate (T v1, U v2, V v3): var1(v1), var2(v2), var3(v3) {} //constructor

        void printVar() {
        cout << "var1 = "<< var1 << endl;
        cout << "var2 = "<< var2 << endl;
        cout << "var3 = "<< var3 << endl;
        }
};


int main() {
    /*Se crea un objeto. No es necesario especificar V porque le estamos pasando un- 
    char que anteriormente se especifico por defecto */
    ClassTemplate<int, double> obj1(7, 7.7, 'c'); 
    cout << "obj1 values: " << endl;

    obj1.printVar();
    // Se puede tomar cualquier tipo. En este caso V se toma como bool porque se especificó 
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false); 
    cout << "\nobj2 values: " << endl;
    obj2.printVar();
    return 0;
}