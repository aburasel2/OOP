#include <iostream>
using namespace std;


class myClass{
public:
    //now a is public
    int a;


    // and there si no need for set_a()


};


int main() {
    myClass obj1, obj2;
    obj1.a = 10;
    obj2.a = 99;


    cout << obj1.a << "\n";
    cout << obj2.a << "\n";
}
//
// Created by younus on 14/09/2024.
//
