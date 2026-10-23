// Write a program to check if 2 strings are anagrams of each other 

#include <stdio.h>
int main() {
  char str1[100],str2[100];
  printf("Enter the first string : ");
  gets(str1);
  printf("Enter the second string : ");
  gets(str2);
  int flag;
  flag = 0;
  for (int i = 0 ; str1[i] != '\0' ; i = i + 1) {
        char c;
        c = str1[i];
        for (int j = 0 ; str2[j] != '\0' ; j = j + 1) {
            if (str2[j] == c) {
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
        
