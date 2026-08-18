//Write a program that accepts a percentage (0 to 100) and assigns grade on a given criteria

#include <stdio.h>
int main() {
  float per;            //Percentage can be either an integer value or a decimal value
  printf("Enter the percentage:");
  scanf("%f",&per);

  if (per >= 90 && per <= 100) {              //Using && to verify if the percentage lies between 90 and 100
      printf("Grade A");
  }

  else if (per >= 80 && per <= 89) {            //Using && to verify if the percentage lies between 80 and 89
      printf("Grade B");
  }

  else if (per >= 70 && per <= 79) {                 //Using && to verify if the percentage lies between 70 and 79
      printf("Grade C");
  }

  else if (per >= 60 && per <= 69) {                   //Using && to verify if the percentage lies between 60 and 69
      printf("Grade D");
  }

  else if (per < 60) {                 //Checking if the percentage is less than 60
      printf("Grade F");
  }

  else {                             //Any other value of percentage entered will be considered invalid
      printf("Invalid Percentage!");
  }
  return 0;
}




