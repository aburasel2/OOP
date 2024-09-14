#include<iostream>
using namespace std;
int main(){


    int a ,b, d, min;
    cout << "Please enter an two number: ";
    cin>>a>>b;


    min = a>b ? a:b;


    for( d = 2; d < min; d++)
        if(((d%2)==0) && ((b%d)==0))break;


    if(d==min) {


        cout<<"No common denominator is "<<d<<endl;
        return 0;
    }

    cout<<" The lowest Common denominator is "<<d<<endl;
    return 0;

}

