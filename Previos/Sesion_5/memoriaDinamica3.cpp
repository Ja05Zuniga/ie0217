#include <iostream> 
using namespace std;

class Student { 
    private: 
        int age;

    public:
        // constructor initializes age to 12 
        Student() : age(12) {}

        void getAge() {
        cout << "Age = " << age << endl;
        }
};

int main() {
    // se reserva memoria de una clase
    // Se declara un puntero tipo Student
    Student* ptr = new Student();

    // llamar a getAge()
    // Esta notación '->' se usa en punteros.Es el equivalente a '.'
    ptr->getAge();

    delete ptr; //IMPORTANTE
    return 0;
}