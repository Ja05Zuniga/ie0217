#include <iostream> 
#include <vector>
using namespace std;

int main() {
    /*Vector tipo int nombre_vector*/
    vector<int> numbers = {1, 100, 10, 70, 100};

    
    cout << "Numbers are: "; 
    
    for (auto &num: numbers) {
        cout<<num <<".";
    }
    return 0;
}