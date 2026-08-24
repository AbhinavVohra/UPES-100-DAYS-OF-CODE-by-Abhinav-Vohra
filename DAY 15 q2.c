//Write a program to reverse a given number

#include <stdio.h>
int main() {
  int n,rem;              //n is the number entered , rem will store the last digit of the number during while loop through %
  int rev=0;                //rev will be used to contain the digits in the reversed order

  printf("Enter the number : ");
  scanf("%d",&n);

  while (n > 0) {                 
        rem = n % 10;
        rev = rev * 10  + rem ;
        n = n / 10;                     // n / 10 will eventually lead to n becoming zero because of which we are checking the value for non zero
  }
  printf("The reversed number is : %d",rev);
  return 0;
}
