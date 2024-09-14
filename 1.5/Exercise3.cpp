#include<iostream>
using namespace std;


#define  SIZE 100


class Q_type {


    int queue[SIZE]; // holds the queue
    int head, tail;  // indices of head and tail




public:
    void init();  // initialize
    void q(int num); //store
    int dequeue();  // retrieve






};


// Initialize
void Q_type::init() {
    head = tail = 0;
}


// put value on a queue.


void Q_type::q(int num) {
    if(tail + 1 == head || (tail + 1== SIZE && !head)) {
        cout<<"queue is full"<<endl;
        return;
    } tail ++;
    if(tail == SIZE) tail = 0;
    queue[tail] = num;
}


// remove value from a queue .
int Q_type::dequeue() {
    if(head == tail) {
        cout<<"queue is empty"<<endl;
        return 0;
    }
    head ++;
    if(head == SIZE) head = 0;
    return queue[head];
}


int main() {
    Q_type Q1 , q2;
    int i;


    Q1.init();
    q2.init();




    for(i = 1; i <= 10; i++) {
        Q1.q(i);
        q2.q(i * i);
    }


    for(i = 1; i <= 10; i++) {
        cout<< "Degueue 1 : "<< Q1.dequeue()<<endl;
        cout<< " Degueue 2 : " << q2.dequeue()<<endl;
    }
    return 0;
}
