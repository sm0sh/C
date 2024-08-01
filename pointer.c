// #include<stdio.h>

// int main(){
//     int i=34;
//     int *j = &i; // j will now store the address of i
//     printf("The value of i is %d\n", i);
//     printf("The value of i is %d\n", *j);
//     printf("The address of i is %u\n", &i);
//     printf("The address of i is %u\n", j);
//     printf("The address of j is %u\n", &j);
//     printf("The value of j is %d\n", *(&j));
//     return 0;
// }

// #include<stdio.h>
// int sum (int a, int b);
// int main(){
//     int a=4, b=7;
//     printf("The value of 4+7 is %d\n", sum(a, b)); 
//     return 0;
// }
// int sum (int a, int b){
//     return a + b;
// }

#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main(){
    int x=3, y=4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    // wrong_swap(x, y); // will not work due to call by value
    swap(&x, &y);
    printf("The value of x and y after swap is %d and %d\n", x,y);
    return 0;
}
 
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}