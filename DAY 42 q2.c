//Write a program to convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main() {
  int n;
  char str[100];
  printf("Enter the string : ");
  scanf("%d",str);

  n = sizeof(str);
  for (int i = 0 ; i < n ; i = i + 1) {
        if (str[i] >= 'a' && str[i] <= 'z') {
              str[i] = str[i] - 32;
        }
  }
  printf("NEW STRING : %s",str);
  return 0;
}
