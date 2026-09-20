//Write a program to count vowels and consonants in a string 

#include <stdio.h>
int main() {
  char str[100];

  printf("Enter a string without spaces/digits : ");        //This code uses no in built function , thus cannot verify for a digit/special character 
  scanf("%s",str);

  int c1 = 0,c2 = 0;

  for (int i = 0 ; str[i] != '\0' ; i = i + 1) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' 
            || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
              c1 = c1 + 1;           //A check for both uppercase and lowercase vowels 
        }
        else {
              c2 = c2 + 1;          //If not avowel , then the character will be counted as a consonant
        }
  }
  printf("No of vowels : %d\n",c1);
  printf("No of consonants : %d",c2);
  return 0;
}
 
