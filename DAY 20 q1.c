//Write a program to find the product of odd digits in a number

#include <stdio.h>
int main() {
  int n;
  int product=1;                    //Any number multiplied by 1 is the number itself which is why we have assigned the value 1 to product
  int rem;

  printf("Enter the number : ");
  scanf("%d",&n);

  while (n > 0) {                  // n = n / 10 eventually leads to n becoming 0 because of which we check n for greater than 0 
       rem = n % 10;
       if ((rem % 2)!=0) {         //Only if the digit is odd, then only it will be multiplied in the product
             product = product * rem;
       }
       n = n / 10;
  }
  if (product == 1) {              //If the product,s value stays the same value 1 which we defined, then it will mean that there were no odd digits in the number
      printf("There are no odd digits in this number!");
  }
  else  {
    printf("The product of the odd digits of the number is : %d",product);
  }
  return 0;
}
