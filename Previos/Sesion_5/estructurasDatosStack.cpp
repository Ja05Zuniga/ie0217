// Stack implementation in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10 

//Es el tamaño del stack
int size = 0;

// Creating a stack
struct stack {
    //Arreglo de enteros de capacidad 10
    int items [MAX]; 
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s) { 
    s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
    if (s->top==MAX-1)
        //True
        return 1;

    else
        //False
        return 0;

    //Ojo, no comprueba que la pila esta vacia
}

// Check if the stack is empty 

int isempty(st *s) {
if (s->top==-1)
    return 1;
else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) { 
    //Si la pila esta llena. Entonces:
    if (isfull(s)) {
        cout<<"STACK FULL";
    } else {
        //Si no
        s->top++;
        s->items [s->top] = newitem;
                //Para saber cual es la cabeza de la pila
    }
    //Aumenta el tamaño en una unidad
    size++;
}

// Remove element from stack
void pop(st *s) {
    //Si la pila esta vacia.Entonces
    if (isempty(s)) {
        cout<<"\n STACK EMPTY \n";
    } else {
        //Si no se quita el elemento
        cout << "Item popped-"<<s->items[s->top];
        //Se resta el indice de la cabeza en uno
        s->top--;
    }
    //Se resta en una unidad
    size--;
    cout << endl;
}


// Print elements of stack 
void printStack(st *s) { 
    printf("Stack: ");
for (int i=0; i < size; i++) {
    cout<<s->items[i] <<" ";
}
    cout << endl;
}

// Driver code
int main() { 
    int ch; 
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printStack(s);
    pop(s);

    cout << "\nAfter popping out\n";
    
    printStack(s);
}