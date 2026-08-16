//Write a program to check whether an entered character is an uppercase alphabet,digit,or a special character

#include <stdio.h>
#include <ctype.h>              //ctype Header file is included so that we can use functions like isalpha(),isdigit() etc in our code


int main() {
  char a;                           //char data type stores int values along with char values
  printf("Enter a character : ");
  scanf("%c",&a);

  if (isalpha(a)) {                 //Checking whether the character entered is an alphabet
        if (isupper(a)) {                  //Check for uppercase alphabet
               printf("The character is an uppercase alphabet");
        }
        else {                               //Check for lowercase alphabet
               printf("The character is a lowercase alphabet");
        }
  }

  else if (isdigit(a)) {         //Check for digits
               printf("The character is a digit");
  }

  else {                //If all the above conditions are not true,then the character will be declared a special character
        printf("The character is a special character");
  }

  return 0;
}
