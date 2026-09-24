//Write a program to find the first repeating lowercase alphabet in the string 

#include <stdio.h>
int main() {
  char str[100];

  printf("Enter a string with only lowercase alphabets : ");
  scanf("%s",&str);
  int flag=0;

  while (flag  != 1) {
      for (int i = 0 ; str[i] != '\0' ; i = i + 1) {
           for (int k = i + 1 ; str[k] != '\0' ; k = k + 1) {
                 if (str[k] == str[i]) {
                      printf("%c got repeated the first in the string");
                      flag = 1;
                      break;
                 }
           }
      }
  }
  return 0;
}


  
