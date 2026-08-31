/* Write a program to print the following pattern:
   *****
   *****
   *****
   *****
   *****   */ 

#include <stdio.h>
int main() {
  int i,j;

  for (i = 1 ; i <= 5 ; i = i + 1) {     //This outer loop will work 5 times to give the output as 5 lines
         printf("\n");                   // \n is used so that all the '*' dont get printed in a single line
         for (j = 1 ; j <= 5 ; j = j + 1) {      //This inner loop will work 5 times to give the output as 5 '*' in each line
                 printf("*");
         }
  }
  return 0;
}
