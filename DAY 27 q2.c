/* Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *   
*/

#include <stdio.h>
int main() {
  int i,j,k;
  int total_section,stars;

  total_section = 7;       //The total no of sections/groups of * are 7

  for (i = 1 ; i <= total_section ; i = i + 1) {
          if (i <= 4) {    //Till i is less than or equal to 4 , the no of * in each section start increasing from 1 to 3 to 5 to 7 
              stars = (2 * i) - 1;
              for (j = 1 ; j <= 4 - i ; j = j + 1) {     //Till i is less than or equal to 4 , the spaces before the * wil be equal to (4 - i)
                   printf(" ");
              }
          }
          else {          //After i has exceeded 4 , the no of * in each section start decreasing from 5 to 3 to 1
              stars = 2 * (total_section - i + 1) - 1;
              for (j = 1 ; j <= i - 4 ; j = j + 1) {    //After i has exceeded 4 , the spaces before the * will be equal to (i - 4)
                   printf(" ");
              }
          }
          for (k = 1 ; k <= stars ; k = k + 1) {
              printf("*");
          }
          printf("\n");         // \n is used so that the * dont get printed in a single line
  }
  return 0;
}
              
