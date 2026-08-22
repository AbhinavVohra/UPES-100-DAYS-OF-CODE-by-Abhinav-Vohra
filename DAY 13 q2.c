//Write a program to print numbers from 1 to n

#include <stdio.h>
int main() {
  int n;                    //This is the number till which we have to print the numbers
  int c=1;                  //The starting will be from 1
  printf("Enter the number till which the numbers have to be displayed :");
  scanf("%d",&n);

  while (c <= n) {        //This loop will execute till 1 is less than or equal to the number entered
        printf("%d ",c);
        c = c + 1;               //Incrementing c so that it gets closer to the value of n
  }
  return 0;
}
     
  
