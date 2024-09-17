
#include<iostream>
#include<string>
using namespace std;
class Batsman {
   private:
   string name;
   int age;
   double average;
   double strikeRate;

    public:
         void setData(string name, int age, double average, double strikeRate);
         void getData() {
             cout<<"Enter name: "<<name<<endl;
             cout<<"Enter age: "<<age<<endl;
             cout<<"Enter average: "<<average<<endl;
             cout<<"Enter strikeRate: "<<strikeRate<<endl;

         };
};

void Batsman::setData(string n, int a, double ave, double s) {
    name = n;
    age = a;
    average = ave;
    strikeRate = s;
}
int main() {
    Batsman ob;
    ob.setData("Rasel",22, 1200/100, 120);
    ob.getData();
}