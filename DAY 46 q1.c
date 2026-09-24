//Write a program to remove all the vowels from a string 

#include <stdio.h>
int main() {
  char str1[100];
  printf("Enter the string : ");
  scanf("%s",str1);

  str2[100];
  int c;

  for (int i = 0 ; str1[i] != '\0' ; i = i + 1) {
       if (str1[i] != 'A' || str1[i] != 'E' || str1[i] != 'I' || str1[i] != 'U' || str1[i] != 'O' 
           || str1[i] != 'a' || str1[i] != 'e' || str1[i] != 'i' || str1[i] != 'o' || str1[i] != 'u') {
             str2[c] = str1[i];
             c = c + 1;
       }
  }
  printf("String without vowels : %s",str2);
  return 0;
}
