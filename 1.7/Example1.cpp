#include <iostream>
using namespace std;
int abs(int n);
long abs(long n);
double abs(double n);

int main() {

    cout << "absolute value of -10" << abs(-10) << endl;
    cout << "absolute value of -5" << abs(-10l) << endl;
    cout << "absolute value of -3" << abs(-10.01) << endl;

    return 0;
}


    int abs(int  n) {
          cout<< "In  Integer abs()\n";
         return  n<0 ? -n : n;
}

    long abs(long n) {
    cout<< "In  Long abs()\n";
    return  n<0 ? -n : n;
}

    double abs (double n) {
    cout<< "In  Double abs()\n";
    return  n<0 ? -n : n;
}
