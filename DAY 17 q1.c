//Write a program to check whether a number is Armstrong or not

#include <stdio.h>                  /*NOTE : This program only verifies whether a number is Armstrong or not for 3 DIGIT NUMBERS 
                                      This program cant check for Armstrong for 4 DIGIT NUMBERS!*/
  int main () {
  int n;
  int sum=0;                        
  int rem;                          //rem will extract the last digit in while loop
  int z;                            /*We have stored the value of n in z because we will need to 
                                     compare the sum with n,s value(now stored in n) as n will be reduced through n /10*/
  printf("Enter the number : ");
  scanf("%d",&n);
  z = n;

  while (n > 0) {
        rem = n % 10;
        sum = sum + rem * rem * rem;      //For an Armstrong number, we will need to collect the sum of cube of all digits
        n = n / 10;
  }
  if (z == sum) {                          //If the sum of cube of all digits is equal to the number itself, then the number is an Armstrong number
        printf("Number is Armstrong");
  }
  else {
        printf("Number is not Armstrong");
  }
  return 0;
}
