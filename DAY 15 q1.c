//Write a program to calculate the factorial of a number

#include <stdio.h>
int main() {
  int num;
  int fac=1;              //fac variable will be initialised with the value 1 because we will multiply each preceding number with it
  printf("Enter the number : ");
  scanf("%d",&num);

  while (num >= 1) {                   //we will keep comparing this as we have to decrease the value of num to less than 1
         fac = fac * num;
         num = num - 1;                //decrementing num by 1
  }
  printf("The factorial of the number is : %d",fac);
  return 0;
}
