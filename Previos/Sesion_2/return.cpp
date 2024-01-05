# include <iostream>
using namespace std;

int add (int a, int b){
    return (a+b);
}

int main (){
    int n=12;
    int m=43;
    cout<<n<<"+"<<m<<"="<<add(n, m)<<endl;
    return 0;
}