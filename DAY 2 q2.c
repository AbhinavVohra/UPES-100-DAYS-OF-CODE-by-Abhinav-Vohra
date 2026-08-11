//Write a program to calculate area and circumference of a circle given its radus.

#include <stdio.h>

int main() {
  int radius;
  float area, circumference;
  float pi = 3.14;

  scanf("%d", &radius);

  area = pi * radius * radius;
  circumference = 2 * pi * radius;

  printf("area = %.2f\n", area);
  printf("circumference = %.2f\n",circumference);

  return 0;
}
