//Write a program to print the initials of a name

#include <stdio.h>
int main() {
  char str[100];

  printf("Enter the full name : ");
  fgets(str,sizeof(str),stdin);

  printf("%c.",str[0]);
  
