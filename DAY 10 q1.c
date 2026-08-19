//Write a program to classify a triangle as Equilateral,Isosceles or Scalene based on its side lengths

#include <stdio.h>
int main() {
  double a,b,c;                 //The values of all the three sides can be either non-decimal or decimzal values
  printf("Enter all the sides of the triangle :");
  scanf("%lf,%lf,%lf",&a,&b,&c);

  if (a==b && b==c) {             //If a is equal to b and b is equal to c,then all the sides are equal making it an Equilateral triangle
       printf("The triangle is Equilateral");
  }

  else if (a==b && b!=c || b==c && c!=a || a==c && b!=c) {          //If any of the two sides are equal to each other then the triangle is Isosceles
       printf("The triangle is Isosceles");
  }

  else {                         //If no side is equal to each other then the triangle is Scalene
       printf("The triangle is Scalene");
  }
  return 0;

}
