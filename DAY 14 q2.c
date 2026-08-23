//Write a program to print the product of even numbers from 1 to n

#include <stdio.h>
int main () {
  int n;                               //The number till which we need the product of even numbers
  int number = 1;                      //The starting is from 1
  int product = 1;

  printf("Enter the number till which the product of even numbers is required : ");
  scanf("%d",&n);

  while (number <= n) {
        if (number % 2 == 0) {                   //If the number is even, then only it will be multiplied in the product
             product = product * number; 
        }
        number = number + 1;                    //Incrementing the number variable by 1
  }
  printf("The product of even numbers till %d is : %d",n,product);
  return 0;
}
