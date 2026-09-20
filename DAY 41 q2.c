//Write a program to print each character of a string on a new line

#include <stdio.h>
int main() {
  char str[100];

  printf("Enter a string without spaces(a string containing only one word) : ");
  scanf("%s",str);                  //This code is only valid for a single string or a string without spaces(a single word)

  for (int i = 0 ; str[i] != '\0' ; i = i + 1) {         //This loop will run until the null character('\0') appears
       printf("%c",str[i]);      
       printf("\n");                //So that all the characters are not printed in a single line
  }
  return 0;
}
