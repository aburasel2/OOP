#include <iostream>
using namespace std;

#define SIZE 10


struct stack {
    stack();
    void push(char ch);
    char pop();
private:
    char stck[SIZE];
    int tos;
};

stack::stack() {
    cout << "Constructing a stack" << endl;
    tos = 0;
}


void stack::push(char ch) {
    if(tos == SIZE) {
        cout << "Stack is full" << endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}


char stack::pop() {
    if(tos == 0) {
        cout << "Stack is empty" << endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {

    stack s1, s2;
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i = 0; i<3; i++)cout << "Pop S1: " << s1.pop() << endl;


    for(i = 0; i<3; i++)cout << "Pop S2: " << s2.pop() << endl;

    return 0;
}
