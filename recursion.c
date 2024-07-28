// #include<stdio.h>
// int factorial(int x);

// int main(){
//     int a = 6;
//     printf("The value of factorial %d is %d", a, factorial(a));
//     return 0;
// }

// int factorial(int x){
//     printf("Calling factorial (%d)\n", x);
//     if (x==1 || x==0){
//         return 1;
//     }
//     else{
//         return x * factorial(x-1);
//     }
// }

// #include<stdio.h>
// void printPattern(int n);
// int main(){
//     int n=4;
//     printPattern(n);
//     return 0;
// }

//     void printPattern(int n){
//     if (n==1){
//         printf("*\n");
//         return;
//     }
//     printPattern(n-1);
//     for (int i = 0; i < (2*n-1); i++)
//     {
//        printf("*");
//     }
//     printf("\n");
// }

#include<stdio.h>
void printPattern(int n);

int main(){
    int n = 4;
    printPattern(n);
    return 0;
}

void printPattern(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
}