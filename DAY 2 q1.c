//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
  int length,breadth,area,perimeter;       //All of these values will be in int data type
  printf("Enter the length of the Rectangle:");
  scanf("%d", &length);

  printf("Enter the breadth of the rectangle:");
  scanf("%d",&breadth);

  area = length * breadth;                 //Area=Length*Breadth
  perimeter = 2 * (length + breadth);        //Perimeter=2L + 2B   OR   2(L+B)

  printf("area = %d\n", area);
  printf("perimter = %d\n",perimeter);

  return 0;
}
