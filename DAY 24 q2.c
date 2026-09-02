/*Write a program to print the following pattern :
  1
  12
  123
  1234
  12345    */

  #include <stdio.h>
  int main () {
     int i,j;

     for (i = 1 ; i <= 5 ; i ++ ) {     //i will iterate 5 times because of which there are 5 lines in the output
            printf("\n");               // \n to ensure that all the characters are not printed in a straight line
            for (j = 1 ; j <= i ; j ++ ) {       //j will iterate till the current value of i because of which the no of valueas are progressively increasing with each line
                    printf("%d",j);
            }
     }
     return 0;
  }
 
