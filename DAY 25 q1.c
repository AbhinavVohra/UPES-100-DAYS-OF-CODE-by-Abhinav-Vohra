/*  Write a program to print the following pattern:
    5
    45
    345
    2345
    12345  */

#include <stdio.h>
int main() {
  int i,j;

  for (i = 5 ; i >= 1 ; i = i - 1) {        // i will iterate 5 times for 5 lines and is decrementing because numbers less than 5 are coming before 5 in the pattern
        for (j = i ; j <= 5 ; j = j + 1) {    // The no of iterations for j increase by 1 after every iteration of i 
               printf("%d",j);
        }
        printf("\n");                   // \n ensures that all the characters are not printed in the same line
  }
  return 0;
}
