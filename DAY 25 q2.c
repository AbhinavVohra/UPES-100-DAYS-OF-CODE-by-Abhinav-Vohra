/* Write a program to print the following pattern:
   *****
    ****
     ***
      **
       *    */

#include <stdio.h>
int main() {
  int i,j,k;

  for (i = 0 ; i < 5 ; i = i + 1) {            // i is responsible for the number of lines
         for (j = 0 ; j < i ; j = j + 1) {     // j will print space character before every line so that we get the desired pattern
                printf(" ");
         }
         for (k = 0 ; k < 5 - i ; k = k + 1) {     // k will print the '*' , k = 5 - i means that k will decrease when i increases ('*' will decrease with each iteration) 
                printf("*");
         }
         
        printf("\n");            // \n ensures that the characters are not printed in a single line
  }
  return 0;
}
