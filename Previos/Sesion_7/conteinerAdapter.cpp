#include <iostream> 
#include <stack>

using namespace std;

int main() {
    //stack tipo int 
    stack<int> numbers;

    // Se ingresan valores al stack
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    // Acceder al elemento superior y usar pop hasta que la pila esté vacia
    while(!numbers.empty()) { 
        // print top elemto
        cout << numbers.top() <<"";

    // pop al elemento superior
    numbers.pop();
    }
    return 0;
}