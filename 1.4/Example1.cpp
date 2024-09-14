/*
This is a c-like comment.
   this program determines whether
   an integer is odd or even.


*/
#include <iostream>
using namespace std;
int main(){


    int num; // This is a c++ single-line comment


    // Read the number


    cout<<"Enter a number to be tested: ";
    cin>>num;


    // see if even or odd


    if(num % 2 == 0) {
        cout<<" Number si Even"<<endl;
    }
    else {
        cout<<" Number is Odd"<<endl;
    }


    return 0;




}

