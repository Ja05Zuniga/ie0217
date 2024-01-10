#include <iostream>
using namespace std;

class Student {
    public:
        double marck;

        Student(double m){
            marck = m;
        }
};
// La funcion recibe dos parametros tipo Student, que es la clase.
// Student, en este caso, se comporta como un int, float, etc
void calculatAverage(Student s1, Student s2){
    
    // se puede usar marck porque esta en 'public'
    double average = (s1.marck + s2.marck)/2;
    cout<<"Average Markc"<< average<<endl;
}

int main (){
    //Se declaran dos objetos (student1 y student2) tipo Student
    //y se envian a la funcion
    Student student1(88.0), student2(12.0);
    calculatAverage(student1, student2);
    return 0;
}