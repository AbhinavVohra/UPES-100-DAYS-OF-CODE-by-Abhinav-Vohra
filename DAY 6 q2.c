//Write a program to check whether a number is positive,negative or zero using nested if-else

#include<stdio.h>
int main() {
  int n;
  printf("Enter the number:");           //The number can be positive,negative or even zero
  scanf("%d",&n);

  if (n!=0) {                             //This statement is used to ensure that the number is not ZERO
      if (n>0)  {                              //This nested if will execute only if number is not ZERO
           printf("The number is positive");
      }
      else if (n<0) {                          //This nested else if will execute only if number is not ZERO
           printf("The number is negative");
      }
  }
  else {                                         //If all the above if and else if are false then finally this statement will execute
      printf("The number is equal to zero"); 
  }
  return 0;
}
