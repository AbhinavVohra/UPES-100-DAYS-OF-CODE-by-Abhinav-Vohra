//Write a program to toggle the case of each character in a string

#include <stdio.h>
#include <ctype.h>
int main() {
  char str[100]
  int n;

  printf("Enter the string : ");
  scanf("%s",&str);

  n = sizeof(str);

 for (int i = 0 ; i < n ; i = i + 1) {
      if (isupper(int str[i])) {
          str[i] = tolower(str[i]);
      }
      else {
          str[i] = toupper(str[i]);
      }
 }
 printf("New string formed : %s",str); 
 return 0;
}
