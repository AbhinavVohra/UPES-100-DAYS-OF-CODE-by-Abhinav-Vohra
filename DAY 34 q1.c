//Write a program to insert an element in an array at a given position

#include <stdio.h>
int main() {
  int n;
  int pos;
  int element;

  printf("Enter the no of elements to be entered in the array : ");
  scanf("%d",&n);

  int arr[n];     //Declaring the size of the array based on user,s input n

  printf("Enter %d elements :\n",n);
  for (int i = 0 ; i < n ; i = i + 1) {
        scanf("%d",&arr[i]);        //Accepting all the elements one by one through user,s input
  }

  printf("\nEnter the position at which the element has to be inserted : "); //Asking from the user about the position at which the element has to be inserted
  scanf("%d",&pos);

  if (pos > n) {         //If position entered is greater than the no of elements in the array , then it will be considered an invalid input
      printf("Invalid position entered!!");
  }
  
  else {
      printf("\nEnter the element which has to be inserted :");        //Asking from the user the value of the element which has to be inserted
      scanf("%d",&element);

      for (int j = n; j > pos; j--) {     //This loop will iterate backwards in the array and will create a space for the new element to be inserted 
      arr[j] = arr[j - 1];
      }
      arr[pos] = element;             //Inserting the element
      n = n + 1;                      //Increasing the size of the array by one so any other element is not removed because of this new element            
  
      printf("The new array is :\n");
      for (int k = 0 ; k < n ; k = k + 1) {
           printf("%d ",arr[k]);
      }
  }
  return 0;
}

  






  
