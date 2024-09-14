//
// Created by younus on 14/09/2024.
//
#include<iostream>
using namespace std;
#define SIZE 10
// declare a stack class for character


class stack {
    char stck[SIZE]; // holds the stack
    int tos;  // index the top of stack




public:
    void init();  // initialize stack
    void push(char ch); // push character on stack
    char pop(); // pop charter from stack
};


// Initialize the stack
void stack::init() {
    tos = 0;
}


// push a character
void stack::push(char ch) {
    if(tos == SIZE) {
        cout<<"Stack is full"<<endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}


char stack::pop() {
    if(tos == 0) {
        cout<<"Stack is empty"<<endl;
        return 0; // return null empty stack
    }
    tos--;
    return stck[tos];
}
