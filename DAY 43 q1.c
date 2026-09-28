//Write a program to reverse a string

//Write a program to reverse a string

#include <stdio.h>
int main() {
  char str[100];
  int n,start,end,middle;
  int temp;

  printf("Enter the string : ");
  scanf("%s",&str);
  n = sizeof(str);

  start = 0;
  end = n - 1;
  middle = (start + end)/2;

  for (int i = 0 ; i < middle ; i = i + 1) {
       temp = str[start];
       str[start] = str[end];
       str[end] = temp;
       start = start + 1;
       end = end - 1;
  }
  printf("\nReverse string : %s",str);
  return 0;
}
