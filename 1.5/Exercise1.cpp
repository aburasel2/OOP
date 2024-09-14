#include<iostream>
#include <cstring>
using namespace std;


class card {
    char title[80]; // book title
    char author[80]; // author
    int number;   // number in library


public:
    void store (char *t, char *name , int num);
    void display ();
};


void card::store (char *t, char *name , int num) {
    strcpy (title, t);
    strcpy (author, name);
    number = num;
}
void card::display () {
    cout << " Title: " << title << endl;
    cout << " Author: " << author << endl;
    cout << " Number: " << number << endl;
}


int main() {
    card book1, book2 , book3;




    book1.store("Dune", "frank Herbert", 2);
    book2.store("The Foundation Trilogy", "Isaac Asimov", 2);
    book3.store("The Rainbow", "D. H. Lawrence", 1);


    book1.display();
    book2.display();
    book3.display();


}

