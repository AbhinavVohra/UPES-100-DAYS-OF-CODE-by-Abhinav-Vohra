//Write a program to replace spaces with hyphens in a string

#include <stdio.h>
int main() {                         //TO BE CORRECTED LATER
  char str[100];
  int n;            

  printf("Enter the string : ");
  scanf("%d",&str);

  n = sizeof(str);

  for (int i = 0 ; i < n ; i = i + 1) {
       if (str[i] == ' ') {
            str[i] = '-';
       }
  }
  printf("\nNew string formed : %s",str);
  return 0;
}
