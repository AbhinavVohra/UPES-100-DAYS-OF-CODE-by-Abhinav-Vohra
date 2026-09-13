//Write a question to remove an element from an array while the index of the element is provided by the user

#include <stdio.h>
int main() {
  int n;
  int pos;

  printf("Enter the no of elements to be entered in the array : ");
  scanf("%d",&n);

  int arr[n];          //Declaring the size of the array based on user,s input n

  printf("Enter %d elements :\n");
  for (int i = 0 ; i < n ; i = i + 1) {
       scanf("%d",&arr[i]);         //Accepting the elements one by oneinto the array through user,s input
  }

  printf("Enter the position of which the element has to be removed : ");
  scanf("%d",&pos);       //Asking the user for the position from which the element has to be removed from the array

  if (pos > n) {
       printf("Invalid position entered!!");         //If position entered is greater than n , then it will be considered invalid
  }
  else {
       for (int j = pos ; j < n ; j = j + 1) {  //Iterating through the array from the position till the last element to delete the element at that position
            arr[j] = arr[j + 1];
       }
       n = n - 1;               //Decreasing the size of the array by 1 so that no empty place is left

       printf("New array :\n");
       for (int k = 0 ; k < n ; k = k + 1) {
            printf("%d ",arr[k]);
       }
  }
  return 0;
}
       
