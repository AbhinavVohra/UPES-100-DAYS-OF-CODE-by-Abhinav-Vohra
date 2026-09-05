/*  Write a program to print the following pattern:
    *
    ***
    *****
    *******
    *********
    *******
    *****
    ***
    *      */

#include <stdio.h>
int main() {
  int i,j;
  int total_section,stars;
  total_section = 9;          //9 is the total number of sections/groups of * to be printed

  for (i = 1 ; i <= total_section ; i = i + 1) {
         if (i <= 5) {      //Till the number of sections is less than or equal to 5 , the no of * printed start increasing in each section from 1 to 3 to 5 to 7 to 9
               stars = (2 * i) - 1;
         }
         else {            //When the number of sections exceed 5 , the no of * printed start decreasing in each section from 9 to 7 to 5 to 3 to 1
               stars = 2 * (total_section - i + 1) - 1;
         }
         for (j = 1 ; j <= stars ; j = j + 1) {
               printf("*");
         }
         printf("\n");     // \n is used to ensure that the * are not prited in the same line
  }
  return 0;
}
