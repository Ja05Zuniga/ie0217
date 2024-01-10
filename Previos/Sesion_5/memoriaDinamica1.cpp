#include <iostream> 
using namespace std;
int main() {

    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;

    // Se le asigna memoria del tamaño de float[num]
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {

    cout << "Student" << i + 1 <<":";
    cin>> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." <<endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // delete a ptr[] -> Esta notación porque es un arreglo
    delete[] ptr;
    return 0;
}