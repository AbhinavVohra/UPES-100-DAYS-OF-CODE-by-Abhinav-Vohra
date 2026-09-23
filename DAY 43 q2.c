//Write to program to find whether a string is Palindorme or not

#include <stdio.h>                      //TO BE CORRECTED LATER
int main() {
  char str[100];
  int n,middle,end;
  int temp;
  char z[100];

  printf("Enter the string : ");
  scanf("%s",&str);
  n = sizeof(str);
  middle = n / 2;
  end = n - 1;
  
  for (int y = 0 ; y < n ; y = y + 1) {
       z[y] = str[y];
  }
  for (int i = 0 ; i < middle ; i = i + 1) {
       str[i] = temp;
       str[i] = str[end-i];
       str[end-i] = temp;
  }
  if (str == z) {
       printf("String is Palindrome");
  }
  else {
       printf("String is not Palindrome");
  }
  return 0;
}
