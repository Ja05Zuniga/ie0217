#include <iostream>
#include <set>

using namespace std;

int main() {
    /*Vector tipo int nombre_vector*/
    set<int> numbers = {1, 100, 10, 70, 100}; //set no permite numeros repetidos, solo se imprimirá un 100

    // print the set
    cout << "Numbers are: "; 
    for (auto &num: numbers) { 
        cout << num <<"";
    }
    return 0;
}
