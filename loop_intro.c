#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++; // ---> Pehle print fir increment
    --i; // ---> Pehle increment fir print kare
    printf("The value after i is %d\n", i);
    return 0;
}