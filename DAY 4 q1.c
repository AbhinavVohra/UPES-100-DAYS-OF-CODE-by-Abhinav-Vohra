//Write a program to swap two numbers without using a third variable

#include <stdio.h>

int main() {
  int a,b;         
  printf("Enter the first number:");
  scanf("%d",&a);

  printf("Enter the second number:");
  scanf("%d",&b);

  printf("Numbers before swapping:\n");  //Printing original numbers before swapping
  printf("First Number:%d\n",a);
  printf("Second Number:%d\n",b);

  //Swapping both numbers without using a third variable
  a=a+b;   //Storing the sum of both numbers in a
  b=a-b;   //Subtracting b from the sum of a and b gives a which is now stored in b
  a=a-b;   //Substracting the new 'b'(value of a) from the sum of a and b gives b value of original b which is now stored in a

  printf("The Numbers after swapping:\n");
  printf("First Number=%d\n",a);
  printf("Second Number=%d\n",b);
  return 0;
}
  
