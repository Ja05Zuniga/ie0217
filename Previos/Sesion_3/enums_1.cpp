#include <iostream> 
using namespace std;

enum seasons { spring = 34, summer=4, autum=9, winter=12};

int main() {
    seasons s;
    s = summer;
    cout << "summer = " << s << endl;
    return 0;
}