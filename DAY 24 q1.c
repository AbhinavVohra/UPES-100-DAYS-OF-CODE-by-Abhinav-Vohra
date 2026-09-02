/* Write a program to print the following pattern:
   *
   **
   ***
   ****
   *****      */

#include <stdio.h>
int main() {
  int i,j;

  for (i = 1 ; i <= 5 ; i ++) {        //minimum value of i = 1 maximum = 5
        printf("\n");                  // \n ensures that the pattern follows a specific design instead of all characters in a straight line
        for (j = 1 ; j <= i ; j ++) {   //j will be always less than equal to i because of which the no of '*' printed will depend upon the value of j and the no of iterations of i
                printf("*"); }
  }
  return 0;
}
        
