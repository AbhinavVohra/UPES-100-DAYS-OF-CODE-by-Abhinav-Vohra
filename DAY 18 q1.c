//Write a program to print all the factors of a number

#include <stdio.h>
int main () {
  int n;
  int a=1;                     //a will be used as a starting point to check for the number,s factors

  printf("Enter the number : ");
  scanf("%d",&n);
  printf("The factors of this number (Including 1 and the number itself) are :");       //The factors obtained include 1 and the number itself
  while (a <= n) {
        if (n % a == 0) {             //If a divides the number comppletely then it is a factor
              printf("%d,",a);
        }
  a = a + 1;                          //Incrementing a by 1 
  }
  return 0;
}
  
