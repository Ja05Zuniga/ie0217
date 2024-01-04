#include <iostream>
using namespace std;

// Una forma de usar for
int forma (){
    for (int i =1 ; i<=5; ++i){
        cout<<i<<",";
    
    }
    return 0;
}

//Segunda forma de usar for
int forma2 (){
    int num[]={1,2,3,4,5,6,7,8,9,10};
    for (int n : num){
        cout <<n<<",";
    }
    return 0;
}

int forma3(){
    int i=1;
    // Una forma de usar while
    while (i<=5){
        cout<<i<<",";
        ++i;
    }  
    return 0; 
}

int forma4 (){
    int i=1;
    //Una forma de usar do..while
    do {
        cout << i << " ";
        ++i;

    }
    while (i<=5);
    return 0;
}

int main () {
    cout <<forma()<< "\n" ;
    cout  << forma2()<< "\n";
    cout  << forma3()<< "\n";
    cout  << forma4()<< "\n";
}