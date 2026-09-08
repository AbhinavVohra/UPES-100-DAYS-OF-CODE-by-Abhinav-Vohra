//Write a program to read and print all the elements of an array

#include <stdio.h>
int main () {
  int n;

  printf("Enter the no of numbers to be entered in the array : ");
  scanf("%d",&n);

  int arr[n];        //Declaring the size of the array based on the number n entered by the user 

  printf("Enter %d elements : ",n);
  for (int i = 0 ; i < n ; i = i + 1) {
         scanf("%d",&arr[i]);         //Accepting the elements of array one by one through user input 
  }
  printf("The elements of the array are : ");
  for (int j = 0 ; j < n ; j = j + 1) {
         printf("%d ",arr[j]);          //Displaying all the elements of the array
  }
  return 0;
}
