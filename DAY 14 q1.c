//Write a program to print the sum of n odd numbers

#include <stdio.h>
int main () {
  int n;                              //The number till which we have to find the sum of odd numbers
  int number = 1;                   //number variable is taken as a starting point
  int sum = 0;
  printf("Enter the number of odd numbers for which the sum is needed :");
  scanf("%d",&n);
                                            /*For ex: If n = 5 then (5 * 2) is 10 so if we go from 1 to less than 10(from 1 to 9) 
                                             then we can obtain the sum for the first 5 odd numbers*/
  while (number >= 1 && number < (n*2)) {                                                                                        
        if ((number % 2)!= 0) {                      //If the number is odd(not divisible by 2), then only it will add the number to the sum variable 
             sum = sum + number;
        }
        number = number + 1;                         //Incrementing the number variable
  }
  printf("The sum of %d odd numbers is : %d",n,sum);
  return 0;
}

  
