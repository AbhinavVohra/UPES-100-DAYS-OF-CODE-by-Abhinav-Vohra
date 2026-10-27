/* Write a Program to take a positive integer n as input, and find the pivot integer x
   such that the sum of all elements between 1 and x inclusively equals the sum of all elements
   between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1.
   Assume that it is guaranteed that there will be at most one pivot integer for the given input. */

#include <stdio.h>
int main () {
  int n, x, left = 0, right = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (x = 1; x <= n; x++) {
      left = left + x;
      right = 0;

      for (int i = x; i <= n; i++) {
          right = right + i;
      }

      if (left == right) {
          printf("Pivot integer: %d", x);
          return 0;
      }
  }
  printf("-1");
  return 0;
}
