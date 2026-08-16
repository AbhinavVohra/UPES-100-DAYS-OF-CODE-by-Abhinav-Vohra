//Write a program to calculate area and circumference of a circle given its radius.

#include <stdio.h>

int main() { 
  float radius;             //Radius can be either an integer value or a decimal value
  float area, circumference;
  float pi = 3.14f;
  
  printf("Enter the radius:");
  scanf("%f", &radius);

  area = pi * radius * radius;            //Area= pi*r^2
  circumference = 2 * pi * radius;          //Circumference=2*pi*r

  printf("area = %.2f\n", area);          //Both the area and Circumference will be in decimal as pi is a decimal value
  printf("circumference = %.2f\n",circumference);

  return 0;
}
