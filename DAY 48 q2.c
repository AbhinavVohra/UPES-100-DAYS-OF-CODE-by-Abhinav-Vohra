// Write a program to reverse each word in a string without changing the word order

#include <stdio.h>
int main() {
  char str[100];
  printf("Enter the sentence : ");
  fgets(str,sizeof(str),stdin);
  int start,end;
  int i = 0;
  char temp;

  while (str[i] != '\0') {
       start = i;
       while(str[i] != ' ' && str[i] != '\0') {
             i = i + 1;
       }
       end = i - 1;
       while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start = start + 1;
            end = end - 1;
       }
       if (str[i] == ' ') {
            i = i + 1;
       }
  }
  printf("The string with reversed words(in the same order): %s",str);
  return 0;
}
            

      
