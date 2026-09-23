//Write a program to count frequency of a given character in string 

#include <stdio.h>
int main() {
  char str[100];                 //TO BE CORRECTED LATER
  char c;
  int count=0;

  printf("Enter the string : ");
  scanf("%s",&str);

  printf("Enter the character who,s frequency is to be checked :\n");
  scanf("%c",&c);

  for (int i = 0 ; str[i] != '\0' ; i = i + 1) {
       if (str[i] == c) {
           count = count + 1;
       }
  }

  if (count = 0) {
       printf("\nThe character does not belong to this string!!");
  }
  else {
       printf("\nThe frequency of the entered character is : %d",count);
  }
  return 0;
}
