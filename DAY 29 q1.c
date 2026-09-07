//Write a program to find the sum of array elements

#include <stdio.h>
int main() {
  int n;
  int sum=0;

  printf("Enter the number of elements to be entered in the array : ");
  scanf("%d",&n);
  
  int arr[n];          //We have defined the size of array here using n
  
  printf("Enter %d elements :\n",n);
  for (int i = 0 ; i < n ; i = i + 1) {      //Receving the elements of array one by one through user,s input
        scanf("%d",&arr[i]);
  }

  for (int i = 0 ; i < n ; i = i + 1) {      //Surfing through the array to add each element in sum
        sum = sum + arr[i];
  }
  printf("Sum of all elements in the array : %d",sum);
  return 0;
}
         
