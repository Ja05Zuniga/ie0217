# include <iostream>
using namespace std;

int main () {
    char oper;
    float num1, num2;
    cout << "Ingrese un operador (+, *, -, /): ";
    cin >> oper;
    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;
    
    switch (oper) {
        case '+' :
            cout << num1 << "+" << num2 << "=" << num1 + num2; 
            break;
        case '-' : 
            cout << num1 << "-" << num2<< "="<< num1 - num2;
            break;
        case '*':
            cout << num1 << "*" << num2 << "="<< num1 * num2;
            break;

        case '/':
            cout << num1 << "/" << num2 << "="<< num1 / num2;
            break;
        default:
            // Por si no ingresa uno de estos caracteres (+, *, -, /)
            cout <<"Operador invalido";
            break;
        
        }
    return 0;
}