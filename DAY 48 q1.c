// Write a program to check whether a string is a rotation of the other

#include <stdio.h>
int main() {
  char str1[100],str2[100];
  char doubled[200];
  int len1 = 0,len2 = 2,found = 0;
  printf("Enter the fist string : ");
  scanf("%s",&str1);
  printf("Enter the second string : ");
  scanf("%s",&str2);
  while (str1[len1] != '\0') {
       len1 = len1 + 1;
  }
  while (str2[len2] != '\0') {
       len2 = len2 + 1;
  }
  if (len1 != len2) {
       printf("The length of both the strings should be equal!!");
  }
  else {
       for (int i = 0 ; i < len1 ; i = i + 1) {
             doubled[i] = str1[i];
             doubled[len1 + i] = str1[i];
       }
       doubled[2 * len1] = '\0';

       int j;
       for (int i = 0 ; i < len1 ; i = i + 1) {
             j = 0;
             while (j < len2 && doubled[i + j] == str2[j]) {
                   j = j + 1;
             }
             if (j == len2) {
                   found = 1;
                   break;
             }
       }  
       if (found == 1) {
             printf("The strings are rotation of each other");
       }
       else {
             printf("The strings are not the rotation of each other");
       }
 }
 return 0;
}











