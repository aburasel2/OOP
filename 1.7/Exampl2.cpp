#include <iostream>
using namespace std;

void date(char *date);
void date(int month, int day, int year);
int main() {
    date("8/23/99");
    date(8,23,99);

    return 0;
}


    void date(char *date) {
    cout<< "date : " << date <<endl;

}

    void date (int month, int day , int year) {
    cout<< "Month : " << month << "\n";
    cout<< "Day : " << day << "\n";
    cout<< "Year : " << year << "\n";
}
