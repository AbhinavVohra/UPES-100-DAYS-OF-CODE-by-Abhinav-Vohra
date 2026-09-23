//Write a program to reverse a string

#include <stdio.h>                      //TO BE CORRECTED LATER
int main() {
  char str[100];
  int n,middle,end;
  int temp;

  printf("Enter the string : ");
  scanf("%s",&str);

  n = sizeof(str);
  middle = n / 2;
  end = n - 1;

  for (int i = 0 ; i < middle ; i = i + 1) {
       str[i] = temp;
       str[i] = str[end-i];
       str[end-i] = temp;
  }
  printf("\nReverse string : %s",str);
  return 0;
}
