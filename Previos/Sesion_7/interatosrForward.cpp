
#include <iostream> 
#include <forward_list> 
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};

    //Crea un iterador que inicie desde el comienzo (desde el primer valor)
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        // accede al valor del iterador 
        int original_value = *itr;

        // multiplica por dos cada valor 
        *itr = original_value * 2;

        // Se mueve a la siguiente posicion
        itr++;
    }

    // print resultados
    for (int num: nums) {
        cout << num << ",";
    }
    return 0;
}
