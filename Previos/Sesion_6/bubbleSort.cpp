#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {
                //Se pasa la referencia

    // bucle para acceder a cada elemento del arreglo
    for (int step = 0; step < size; ++step) {

    // bucle para comparar los elementos
    for (int i = 0; i < size - step; ++i) {

    // compara dos elementos 
    // cambia para ordenar de forma descendente 
    if (array[i] > array[i + 1]) {

    // swapping elementos si hay elementos
    int temp = array[i];
        array[i] = array[i + 1]; 
        array[i + 1] = temp;
    }
    }

}
}

//imprimir arrego
void printArray(int array[], int size) {
for (int i = 0; i < size; ++i) {

    cout << " " << array[i];
}
    cout << "\n";
}


int main() {
    int data[] = {-2, 45, 0, 11, -9};
    
    //calcula el tamaño del arreglo de forma generica
    int size = sizeof(data) / sizeof(data[0]);
            //Importante
    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order: \n"; printArray(data, size);
}