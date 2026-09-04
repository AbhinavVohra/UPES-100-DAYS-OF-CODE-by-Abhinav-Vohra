/*   Write a program to print the following pattern:

     *

     *
     *
     *

     *
     *
     *
     *
     *

     *
     *
     *

     *    */

#include <stdio.h>
int main() {
  int i,j,total_section,stars;

  total_section = 5;

  for (i = 1 ; i <= total_section ; i = i + 1) {          //The total sections/groups are 5 in this pattern

         if (i <= 3) {             //Till the count of 3 , the stars printed will increase from 1 to 3 to 5 
               stars = 2 * i - 1;      //stars will contain either 1,3 or 5 till i is less than or equal to 3
         }
         else {
               stars = 2 * (total_section - i + 1) - 1;        //After the value of 3 , stars will contain 3 and then 1
         }

         for (j = 0 ; j < stars ; j = j + 1) {             //The amount of stars printed will be either 1,3 or 5
               printf("*\n");
         }

         if (i < total_section) {                  //The sections will print only till the 5 sections are not printed
               printf("\n");
         }
  }
  return 0;
}

  


















