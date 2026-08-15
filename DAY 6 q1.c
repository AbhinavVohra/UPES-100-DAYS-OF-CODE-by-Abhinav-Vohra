//Write a program to input an integer and check whether it is even or odd using if else

#include <stdio.h>
int main() {
  int n;
  printf("Enter a number:");     //Number can be either positive or negative
  scanf("%d",&n);

  if (n%2==0) {                   //If number is completely divisible by 2, it is an even number
     printf("Number is Even");
  }
  else {                          //If no is not completely divisible by 2 ,it is an odd number
     printf("Number is Odd");
  }

  return 0;
}
  
