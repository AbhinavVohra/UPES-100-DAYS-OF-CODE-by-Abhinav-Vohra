//Write a program to find the HCF or GCD(Greatest Common Divisor) of two numbers

#include <stdio.h>
int main () {
  int num1,num2,temp;                     //temp variable will be used to switch num1 and num2 

  printf("Enter the first number : ");
  scanf("%d",&num1);
  printf("Enter the second number : ");
  scanf("%d",&num2);

  while (num2 != 0) {                    //As num2 will be used to gather the remainder through % , there will be one point when num2 will become 0
          temp = num2;
          num2 = num1 % num2;
          num1 = temp;
  }
  printf("HCF/GCD of the entered numbers is : %d",num1);          //The obtained value of HCF/GCD will be stored in num1
  return 0;
}
 






