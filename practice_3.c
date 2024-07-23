#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf ("Enter four numbers");
    scanf("%d %d %d %d", &num1,&num2,&num3,&num4);

    int greatest=num1;

    if (num2>num1){
        greatest=num2;
    }
    if (num3>num2){
        greatest=num3;
    }
    if (num4>num3){
        greatest=num4;
    }
    printf("The Greatest Number is: %d\n", greatest);

    return 0;
}