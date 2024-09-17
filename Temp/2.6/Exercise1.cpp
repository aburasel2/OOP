#include <iostream>
using namespace std;

// Overload abs() three ways:

// abs()for ints
inline int abs(int n);

{
    cout<< "In integer ans()\n";
    return n<0?-n:n;
}

inline long abs(long n) {
    cout<< "In long abs()\n";
    return n<0?-n:n;
}

// abs() for doubles
inline double abs(double n) {
    cout<<"In double abs()\n";
    return n<0?-n:n;
}

int main() {
    cout<<"The absolute value of -10:"<<abs(-10)<<endl;
    cout<<"The absolute value of 10l:"<<abs(-10l)<<endl;
    cout<<"The absolute value of -10.01 :"<<abs(-10.01)<<endl;
}