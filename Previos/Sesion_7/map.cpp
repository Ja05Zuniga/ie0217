#include <iostream> 
#include <map>
using namespace std;

int main() {
    /*map<key, value*>nombre_map*/
    map<int, string> student;

    // usar [] para añadir elementos
    student[1] = "Jacqueline"; 
    student[2] = "Blake";

    // usar student.insert(make_pair(3, "Denise")); para ingresar un 'usuario' 
    student.insert(make_pair(4, "Blake")); //Otro metodo
                    //par ordenado, necesario

    // los keys tienen que ser unicos, los nombres no
    student[5] = "Timothy";
    student [5] = "Aaron";

    for (int i = 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }
    return 0;
}