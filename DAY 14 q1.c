//Write a program to print the sum of first n odd numbers

#include <stdio.h>
int main () {
  int n;                              //The number till which we have to find the sum of odd numbers
  int number = 1;                     //number variable is taken as a starting point
  int sum = 0;
  printf("Enter the number till which the sum of odd numbers is needed :");
  scanf("%d",&n);

  while (number <= n) {
        if ((number % 2)!= 0) {                      //If the number is odd(not divisible by 2), then only it will add the number to the sum variable 
             sum = sum + number;
        }
        number = number + 1;                         //incrementing the number variable
  }
  printf("The sum of odd numbers till %d is : %d",n,sum);
  return 0;
}

  
