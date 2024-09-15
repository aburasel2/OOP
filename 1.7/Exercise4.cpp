/*#include <iostream>
using namespace std;

#define DELAY 100000


void sleep(int n) {
    long i;
    for ( ; n; n--)
        for(i = 0; i<DELAY; i++);
}

void sleep (char *n) {
    long i;
    int j;

    j = atoi(n);

    for(; j; j--)
        for(i = 0; i<DELAY; i++);
}*/


char s1[80];
strcpy(s1, "Hello");
rev_str(s1,s2);
rey_str(s1);