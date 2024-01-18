
#include <iostream> 
#include <vector>
using namespace std;

int main() {
    // Se crea un vector
    vector<int> vec{1, 2, 3, 4};

    // Crea iteradores para apuntar al primer y ultimo elemento 
    vector<int>::iterator itr_first = vec.begin(); 
    vector<int>::iterator itr_last = vec.end() - 1; //Para así obtener el ultimo elemento

    // Imprimir
    cout << "First Element: " << *itr_first << endl; 
    cout << "Second Element: " << itr_first[1] << endl;

    cout<<"Second Last Element:" << *(itr_last - 1) << endl; 
    cout << "Last Element: " << *(itr_last) << endl;

    return 0;
}