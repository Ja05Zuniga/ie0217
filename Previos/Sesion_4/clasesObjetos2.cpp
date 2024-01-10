#include <iostream>
using namespace std;

class Student {
    public:
        double marck1, marck2;
};


Student createStudent(){
    Student student;
    student.marck1=12.0;
    student.marck2=13.0;
    cout<<"Marck1 = "<<student.marck1<<endl;
    cout<<"Marck2 = "<<student.marck2<<endl;

    return student;
}

int main (){
    //Esto no es necesario, basta con:
    //createStudent();
    Student student1;
    student1 = createStudent();
    return 0;
}