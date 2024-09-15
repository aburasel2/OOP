#include <iostream>
using namespace std;

int main() {
    int b, e, r;
    cout<< "Enter base: ";
    cin >> b;

    cout<< "Enter exponent: ";
    cin >> e;
    r = 1;

    for (; e; e--) r = r * b;

    cout<<"result: "<<r<<endl;
    return 0;
}
