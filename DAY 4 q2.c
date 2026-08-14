//Write a program to display the sum of first 'n' natural numbers

#include <stdio.h>

int main() {
  int n;      //'n' tells us how till how many natural numbers dowe need the sum
  int sum-0;

  printf("Enter a positive integer n:");
  scanf("%d",&n);

  if (n<1) {                   //Ensuring whether the number is positive or not
     printf("Number should be greater han 1!\n);
     return 1;
       }

  for (int i=1; i<=n; i++) {     //Calculate sum using for loop
       sum += i ;    //sum= sum + i
  }

  printf("The sum of the first %d natural numbers is: %d\n", n,sum);     // Displaying the final result

  return 0;
}
