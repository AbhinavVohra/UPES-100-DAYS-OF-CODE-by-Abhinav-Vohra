// Write a program to count the frequency of a given character in string

#include <stdio.h>
int main() {
  char str[50];
  printf("Enter the string : ");
  gets(str);
  char s;
  printf("Enter the character whose frequncy is to be found : ");
  scanf("%c",&s);
  int freq;
  freq = 0;
  for (int i = 0 ; str[i] != '\0' ; i = i + 1) {
        if (str[i] == s) {
             freq = freq + 1;
        }
  }
  if (freq == 0) {
        printf("Character not found in the string!!");
  }
  else {
        printf("The frequency of the character : %d",freq);
  }
  return 0;
}
