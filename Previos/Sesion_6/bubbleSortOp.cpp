#include <iostream>
using namespace std;

//bubble sort
void bubbleSort(int array[], int size) {

    //bucle para acceder a los elementos del arreglo
    for (int step = 0; step < (size-1); ++step) {

    // comprobar
    int swapped = 0;

    // bucle para comparar dos elementos
    for (int i = 0; i < (size-step-1); ++i) {
    // comparar dos elementos del arreglo
    // cambiar para ordenar de forma descendiente 
        if (array[i]> array[i+1]) {
        //Se intercambian si:
            int temp=array[i];
            array[i]=array[i + 1];
            array[i + 1] = temp;

            swapped = 1;
        }
    }

// Si ya no hay mas intercambio. Entonces la matriz esta ordenada.
//NO es necesario seguir comparando. Por lo que el ciclo se rompe
    if (swapped == 0)
        break;
    }

}


// print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];

    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order: \n"; printArray(data, size);
}