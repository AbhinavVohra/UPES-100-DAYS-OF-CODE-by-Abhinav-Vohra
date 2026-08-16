//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
  float a,b,sum;                     //The entered numbers can be either integer values or decimal
  printf("Enter the first number:");
  scanf("%f",&a);

  printf("Enter the second number:");
  scanf("%f",&b);
  
  sum= a + b;                //The sum will be either a decimal value or n integer value depending upon the numbers entered
  printf("sum = %.2f\n",sum);
  return 0;
}
