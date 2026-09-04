/*    Write a program to print the following pattern:
      5
     45
    345
   2345
  12345   */

#include <stdio.h>
int main() {
  int i,j,k;

  for (i = 5 ; i >= 1 ; i = i - 1) {                // i is responsible for the number of lines
          for (j = i ; j >= 1 ; j = j - 1) {       // j will print the space character so that we can obtain the required pattern
                 printf(" ");
          }
          for (k = i ; k <= 5 ; k = k + 1) {       // k will decrement by 1 along with i after every iteration and will go till 5 every time
                 printf("%d",k);
          }
          printf("\n");
  }
  return 0;
}
