#include <iostream> 
#include <unordered_set>
using namespace std;

int main() {
    /*Vector tipo int nombre_vector*/
    unordered_set<int> numbers = {1, 100, 10, 70, 100}; //solo se imprime un 100

    
    cout << "Numbers are: "; 
    for (auto &num: numbers) {
        cout << num <<"";
    }

    return 0;
}