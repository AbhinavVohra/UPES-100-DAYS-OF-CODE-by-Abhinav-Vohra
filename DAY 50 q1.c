// Write a program to change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
  char date[12];
  printf("Enter the date in dd/mmm/yyyy format : ");
  scanf("%s",&date);
  printf("Formatted date : ");
  for (int i = 0 ; i < 2 ; i = i + 1) {
       printf("%c",date[i]);
  }
  printf("-Apr-");
  for (int i = 6 ; i < 11 ; i = i + 1) {
       printf("%c",date[i]);
  }
  return 0;
}
  
