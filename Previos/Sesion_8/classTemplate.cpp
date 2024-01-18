#include <iostream>
using namespace std;

// Class template 
template <class T> 
class Number { 
    private:
        // Variable tipo T
        T num;

    public:
        Number (T n) : num(n) {} // constructor
        T getNum() {
            return num;
    }
};

int main() {
    // crea un objeto tipo int 
    Number<int> numberInt(7);

    // crea un objeto tipo double 
    Number<double> numberDouble(7.7);

    //Se puede usar cualquiera: float, char, etc.
    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;
    return 0;
}