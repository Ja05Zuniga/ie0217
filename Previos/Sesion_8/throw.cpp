#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, divide;

    cout << "Enter numerator";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        // throw si el denominador es 0 
        if (denominator == 0)
        throw 0;
        //es como un return para excepciones
        //brinca a cath
        
        divide = numerator / denominator;

        cout << numerator << " / " << denominator <<"="<< divide << endl;
    }

    catch (int num_exception) {
        cout << "Error: no se puede dividir entre " << num_exception<< endl;
    }
    return 0;
}