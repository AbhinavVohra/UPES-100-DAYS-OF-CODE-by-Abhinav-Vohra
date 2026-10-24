/* Write a program to take an input array of size n.
   The array should contain all the integers between 0 to n
   except for one. Print that missing number */

#include <stdio.h>
int main() {
  int n;
  int total,missing;
  int sum = 0;
  printf("Enter the no of elements to be entered in the array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements :\n");
  for (int i = 0 ; i < n ; i = i + 1) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
  }
  total = n * (n + 1)/2;
  missing = total - sum;
  printf("The missing number : %d",missing);
  return 0;
}
  
  
