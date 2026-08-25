//Write a program to find the Binary equivalent of a number entered by the user

#include <stdio.h>
int main () {
  int n,bit;                    //bit is used during the last steps to finally obtain 0 or 1 as a digit one by one
  int p=1;                      //p will be used to determine whether we get 0 or 1 through division of the number

  printf("Enter the number : ");
  scanf("%d",&n);

  while (p <= n / 2) {          //p will be multiplied by 2 till it reaches the half of the number to determine if the value comes as 0 or 1
        p = p * 2;
  }
  printf("Binary representation of the given number : ");

  while (p > 0) {
        bit = n / p;
        printf("%d",bit);           //As we are not using '\n', the 0 or 1 will be printed without gaps one by one resulting in a Binary number
        n = n % p;
        p = p / 2;                  //This is done to reduce the digits of the original number while extracting binary digits from it
  }
  return 0;
}
