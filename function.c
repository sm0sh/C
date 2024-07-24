// #include<stdio.h>
// void display();  //function prototype

// int main(){
//     int a;
//     printf("Initializing display function\n");
//     display(); //Function Call
//     printf("Display function finished its work\n");
//     return 0;
// }

// // Function definition
// void display(){ 
//     printf("This is display\n");
// }

// #include<stdio.h>
// void goodMorning();
// void goodAfternoon();
// void goodNight();

// int main(){
//     goodMorning();
//     return 0;
// }

// void goodMorning(){
//     printf("Good Morning sm0sh\n");
//     goodAfternoon();
// }

// void goodAfternoon(){
//     printf("Good Afternoon sm0sh\n");
//     goodNight();
// }

// void goodNight(){
//     printf("Good Night sm0sh\n");
// }

#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main(){
    int c;
    c = sum(2, 15); // function call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum (int a, int b){
    int result;
    result = a + b;
    return result;
}