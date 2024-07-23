 //#include<stdio.h>

 // int main(){
    // int i=1, sum=0, n=10;

    // while(i<=n){
    //     sum +=i;
    //     i++;
    // }
    // printf("The value of sum(1 to 10) is %d", sum);

    // for(i=1; i<=n; i++){
    //     sum+=i*8;
    // }
    // do
    // { 
    //   sum +=i;
    //   i++;
    //   printf("The sum of the numbers in the multiplication table of 8 is %d\n", sum); 
    // } while (i<=n);
    // return 0;
    // #include<stdio.h>
    
    // int main(){
    //   int i=1, n=8,factorial=1;
      // for(i=1;i<=n;i++){
      //   factorial *=i;
      // }
    //   while (i<=n)
    //   {
    //     factorial *=i;
    //     i++;
    //   }
      
    //   printf("The value of factorial %d is %d", n, factorial);
    //   return 0;
    // }
#include<stdio.h>

int main(){
  int num = 29;  // Hardcoded number to check
    int i;
    int isPrime = 1;  // Assume the number is prime

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If num is divisible by any number other than 1 and itself
                break;        // It is not prime
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
  return 0;
}