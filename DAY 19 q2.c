//Write a program to findthe sum of digits of a number

#include <stdio.h>
int main () {
  int n;
  int rem;                        //rem will be used to extract the digits of the number one by one
  int sum = 0;

  printf("Enter the number : ");
  scanf("%d",&n);

  while (n > 0) {               //We are checking n for greater than 0 because n / 10 will eventully lead to n becoming 0
         rem = n % 10;
         sum = sum + rem;       //sum will add the remainder left after dividing by 10 one by one to itself
         n = n / 10;
  }
  printf("The sum of the digits of the number is : %d",sum);
  return 0;
}
