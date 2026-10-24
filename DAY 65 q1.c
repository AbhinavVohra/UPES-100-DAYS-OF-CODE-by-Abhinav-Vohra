/* Write a program to take two strings s and t as inputs (assume all characters are lowercase).
   The task is to determine if s and t are valid anagrams, meaning they contain the same characters
   with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". */

#include <stdio.h>
int main() {
  char s[100],t[100];
  printf("Enter the first string : ");
  fgets(s,sizeof(s),stdin);
  printf("Enter the second string : ");
  fgets(t,sizeof(t),stdin);
  int flag;
  flag = 0;
  for (int i = 0 ; s[i] != '\0' ; i = i + 1) {
        char c;
        c = s[i];
        for (int j = 0 ; t[j] != '\0' ; j = j + 1) {
            if (t[j] == c) {
                flag = 1;
                break;
            }
            else {
                flag = 0;
            }
        }
        if (flag == 0) {
            break;
        }
  }
  if (flag == 0) {
        printf("Strings are not the Anagrams of each other");
  }
  else {
        printf("Strings are the Anagrams of each other");
  }
  return 0;
}
        
