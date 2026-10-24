/* Write a program to take an integer array as input.
   Only one element will be repeated. Print the repeated
   element.Try to find the result in one single iteration. */

#include <stdio.h>
int main() {
  int n;
  int sum = 0,total = 0,repeated;
  printf("Enter the no of elements to be entered in the array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements :\n");
  for (int i = 0 ; i < n ; i = i + 1) {
       scanf("%d",&arr[i]);
       sum = sum + arr[i];
       total = total + i;
  }
  repeated = sum - total;
  printf("The Repeated element : %d",repeated);
  return 0;
}
  



