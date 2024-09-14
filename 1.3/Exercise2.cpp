#include <iostream>
using namespace std;
int main(){
    double feet;


    do {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<feet * 12<<" inches\n ";
    }
    while(feet != 0.0);
    return 0;


}

