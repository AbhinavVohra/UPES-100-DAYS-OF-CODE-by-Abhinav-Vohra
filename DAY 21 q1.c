//Write a program to swap the first and last digit of a number

#include <stdio.h>
int main() {
  int num;
  int divisor=1;                          //divisor will be used to surf through the number by multiplying by 10
  int firstdigit,lastdigit,temp,middle,finalnum;   /*firstdigit will only store only the 1st digit , the lastdigit will store num % 10 , the middle will store the 
                                                    middle digits left , temp will store the original number and finalnum is the result obtained after replacing
                                                    first and last digit*/

  printf("Enter the number : ");
  scanf("%d",&num);

  temp = num;
  lastdigit = num % 10;

  while (temp >= 10) {
         temp = temp / 10;          //temp will obtain the first digit of the number eventually at the end of the loop as temp >= 10
         divisor = divisor * 10;
  }
  firstdigit = temp;

  middle = (num % divisor) / 10;
  finalnum = lastdigit * divisor + middle * 10 + firstdigit;

  printf("Original Number : %d\n",num);
  printf("Number after swapping the first and the last digit : %d",finalnum);
  return 0;
}
  
