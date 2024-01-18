#include <iostream>
#include<vector> 
using namespace std;

int main() {
vector <string> languages = {"Python", "C++", "Java"};

/* Se declara el vector
    Sigue la aritmetica de punteros*/
vector<string>::iterator itr;

for (itr = languages.begin(); itr != languages.end(); itr++) { 
cout << *itr <<"";
        //* porque es un puntero, por lo que imprimer el interior del puntero
}
return 0;
}