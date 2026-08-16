//Write a program to input three numbers and find the largest among them using if-else

#include <stdio.h>
int main() {
  float a,b,c;            //All the numbers can be either decimal or non decimal values
  printf("Enter the first number: ");
  scanf("%f",&a);

  printf("Enter the second number: ");
  scanf("%f",&b);

  printf("Enter the third number: ");
  scanf("%f",&c);

  if ((a>b) && (a>c)) {                  //If a is greater than both b and c then it is the greatest number out of three
       printf("%.2f is the greatest number",a);
  }
  else if ((b>c) && (b>a)) {             //If b is greater than both a nad c then it is the greatest number out of the three
       printf("%.2f is the greatest number",b);
  }
  else if ((c>a) && (c>b)) {                  //If c is greater than both a and b then it is the greatest number out of the three
       printf("%.2f is the greatest number",c);
  }
  else {
       printf("No number from the 3 entered numbers is the greatest number");
  }
  return 0;
}
