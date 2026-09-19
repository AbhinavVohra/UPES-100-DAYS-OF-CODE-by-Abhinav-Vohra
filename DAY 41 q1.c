//Write a program to count characters in a string without using built in functions

#include <stdio.h>
int main() {
  char str[100];                //Declaring a string of size 100

  printf("Enter a string without spaces(A single word) : ");       //This code is only relevant for a string with no spaces
  scanf("%s",str);

  int c=0;        //Initialising count as 0 at first

  while (str[c] != '\0') {
       c = c + 1;         //count,s value will increase until '\0' or null character appears
  }

  printf("No of characters in the string : %d",c);
  return 0;
}
