//Write a program to search in a sorted array using binary search 

#include <stdio.h>
int main() {
  int n;

  printf("Enter the no of elements to be entered in the array : ");
  scanf("%d",&n);

  int arr[n];
  printf("Enter %d elements :\n",n);
  for (int i = 0 ; i < n ; i = i + 1) {
       scanf("%d",arr[i]);
  }
  int start,end,middle;
  int search;

  start = 0;
  end = n-1;
  mid = 
