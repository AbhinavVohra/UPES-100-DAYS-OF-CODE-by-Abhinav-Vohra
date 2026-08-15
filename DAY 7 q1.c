//Write a program to input an year an check whether it is a leap year or not

//NOTE: A leap year is divisible by 4 but not by 100,except if it is divisible by 400 then it is considered a leap year

#include <stdio.h>
int main() {
  int year;                  //Year is always a numerical value
  printf("Enter an Year:");
  scanf("%d",&year);

  if (year%100==0) {                //An year divisible by 100 is not considered a leap year
      printf("It is not a leap year");
      return 1;
  }

  else if (year%4==0) {           //An year divisible by 4 is considered a leap year
      printf("It is a leap year");
      return 1;
  }
 
  else if (year%400==0) {           //An year is considered a leap year if divisible by 400 but not by 100
      printf("It is a leap year");
      return 1;
  }

  return 0;
}
