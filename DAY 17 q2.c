//Write a prpgram to check if a number is prime

#include <stdio.h>
int main () {
  int n;
  int a=1;                              //a is taken as 1 as a start counter to divide n by numbers starting from 1 till n itself
  int count=0;                          //count will be used to store the number of factors of n

  printf("enter the number : ");
  scanf("%d",&n);

  while (a <= n) {                     
        if (n % a == 0) {               //A number will be considered a factor of n if it completely divides n leaving remainder 0
             count = count + 1;
        }
     a = a + 1;
  }
  if (count == 2) {                    //If the total factors of n will be 2(including 1 and n itself,then only it will be considered a Prime Number
        printf("Number is Prime");
  }
  else {
        printf("Number is not Prime");
  }
  return 0;
}
        
  
