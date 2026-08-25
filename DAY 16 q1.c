//Write a program to check if a number is palindrome

#include <stdio.h>
int main () {
  int n,z;            
  int rem;
  int rev=0;                      //We have initialised rev as 0 so that we can store the digitd of n in reverse order in it

  printf("Enter the number : ");
  scanf("%d",&n);
  z = n;                         //We have assigned the value of n to z so we can commpare it later for Palindrome

  while (n != 0) {               //n = n / 10 will eventually lead in n becoming zero which is why we check n for greater than 0
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
  }
  if (z == rev) {               //If z(the original value of n) is equal to the value of rev made by collecting the digits of n in reversed order, then the number is Plaindrome
        printf("Number is Palindrome");
  }
  else {
        printf("Number is not Palindrome");
  }
  return 0;
}
