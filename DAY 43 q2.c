//Write a program to check if a string is palindrome

#include <stdio.h>
#include <string.h>
int main() {
  char str[100];
  char duplicate[100];
  int n;
  int start,end,middle;
  int temp;

  printf("Enter the string : ");
  scanf("%s",str);
  n = sizeof(str);

  for (int i = 0 ; i < n ; i = i + 1) {
       duplicate[i] = str[i];
  }

  start = 0;
  end = n - 1;
  middle = (start + end)/2;
  for (int j = 0 ; j < middle ; j = j + 1) {
       temp = str[start];
       str[start] = str[end];
       str[end] = temp;
       start = start + 1;
       end = end - 1;
  }
  int check;
  check = strcmp(str,duplicate);

  if (check == 0) {
       printf("String is Palindrome");
  }
  else {
       printf("String is not Palindrome");
  }
  return 0;
}
  
     
 
