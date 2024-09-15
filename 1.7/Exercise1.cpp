#include<iostream>
#include<cmath>
using namespace std;


int sroot(int i);
long sroot(long i);
double sroot(double i);
int main() {
    cout<< "square rooot of  90. 34 is :" << sroot(90.34) << endl;
    cout<< "\n";
    cout<< "square root of 90l is :" << sroot(90l) << endl;
    cout<< "\n";
    cout<< "square root of 90 is :" << sroot(90) << endl;
}
using namespace std;

 int sroot(int i) {
    cout<< " Computing integer root\n";
     return (int) sqrt((double) i);
 }

  long sroot( long i) {
     cout<< " Computing long root\n";

     return (long) sqrt((double) i);
 }

 double sroot(double i) {
     cout<< " Computing double root\n";
     return sqrt(i);
 }



