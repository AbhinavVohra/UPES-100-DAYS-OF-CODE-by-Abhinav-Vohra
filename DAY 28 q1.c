//Write a program to print all the prime numbers from 1 to n

#include <stdio.h>
int main() {
  int n;
  int outer_start=2;  //As 1 is not a prime number , we start from 2
  int inner_start;
  int is_prime;       //is_prime is a check variable for prime or non prime

  printf("Enter the number (greater than 1) till which the prime numbers are needed : ");
  scanf("%d",&n);
  while (outer_start <= n) {
        inner_start = 2;     //inner_start and is_prime are declared inside outer while loop because they are used inside inner while loop
        is_prime = 1;
        while (inner_start < outer_start) {
                if (outer_start % inner_start == 0) {
                      is_prime = 0;      //If number is divisible by 2 or any other other number , then it is not prime
                      break;
                }
                inner_start = inner_start = inner_start + 1;
        }
        if (is_prime == 1) {    //If number not divisible by 2 or any other number (Only divisible by 1 or the number itself) then the number is prime
                printf("%d\n",outer_start);
        }
        outer_start = outer_start + 1;
  }
  return 0;
}
                      
        
        
