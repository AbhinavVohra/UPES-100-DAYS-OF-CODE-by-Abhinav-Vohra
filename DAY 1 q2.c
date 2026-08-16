//Write a program to input two numbers and display their sum,difference,product and quotient.

#include <stdio.h>

int main() {
  float a,b;                  //Number can be both in integer or decimal form,that,s why it is safe to take the data type as float
  printf("Enter the value of the first number:");
  scanf("%f",&a);

  printf("Enter the value of the second number:");
  scanf("%f",&b);

  printf("sum = %.2f\n",a+b);                     //Sum will be integer or decimal depending upon the numbers
  printf("difference = %.2f\n",a-b);                //The difference will be integer or decimal depending upon the numbers
  printf("product = %.2f\n",a*b);                     //The product will be integer or decimal depending upon the numbers
  printf("quotient = %.2f\n",a/b);                  //The remainder will be integer or decimal depending upon the numbers

  return 0;
}
