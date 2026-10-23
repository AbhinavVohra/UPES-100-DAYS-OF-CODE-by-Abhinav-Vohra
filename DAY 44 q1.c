// Write a program to count spaces,digits and special characters in a string

#include <stdio.h>
#include <ctype.h>
int main() {
  char str[100];
  printf("Enter a string : ");
  gets(str);
  int c1=0,c2=0,c3=0;
  for (int i = 0 ; str[i] != '\0' ; i = i + 1) {
       if (isalnum(str[i])) {
            if (isdigit(str[i])) {
                 c1 = c1 + 1;
            }
       }
       else if (str[i] == ' ') {
            c2 = c2 + 1;
       }
       else {
            c3 = c3 + 1;
       }
  }
  printf("\nNo of spaces : %d\nNo of digits : %d\nNo of special characters : %d\n",c2,c1,c3);
  return 0;
}
