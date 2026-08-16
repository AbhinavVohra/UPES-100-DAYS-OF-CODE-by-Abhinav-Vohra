//Write a program to input a character and check whether it  is a consonant or a vowel

#include <stdio.h>
#include <ctype.h>              //We need to include the ctype Header file to use inbuilt functions like toupper,tolower,isupper,islower,isalpha etc in our code
int main () {
  char ch;
  printf("Enter the character (A to Z):");          //The character entered should range from A to Z
  scanf("%c",&ch);

  if (!isalpha(ch)) {                      //This will execute only if the character entered is not an alphabet
      printf("Chracter entered is invalid!!");
  }

  else if (ch == 'A' || ch == 'E' || ch == 'I' || ch=='O' || ch == 'U' ||     //We are using ||(OR) to check for the possibility of both uppercase and lowercase vowels
    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("Character is a vowel");
  }
  else {                                         //The only possibility left is that the character is a consonant
    printf("Character is a consonant");
  }

  return 0;

}
