//Write a program to search an element in the array using linear search

#include <stdio.h>
int main() {
  int n;
  int search;
  int flag;

  printf("Enter the no of numbers to be entered in the array : ");        
  scanf("%d",&n);

  int arr[n];            //Declaring the size of the array based on the n input by the user 

  printf("Enter %d elements : ",n);
  for (int i = 0 ; i < n ; i = i + 1) {
        scanf("%d",&arr[i]);           //Putting the elements one by one into the array
  }

  printf("Enter the element to be searched : ");
  scanf("%d",&search);                //We will take the user,s input to know which elemnt has to be found in the array

  for (int j = 0 ; j < n ; j = j + 1) {
         if (arr[j] == search) {        //If the element is found , the value of flag variable will be updated to 1 and the loop will be terminated through break statement
               flag = 1;
               break;
         }
         else {                        //If the element is not found , the value of flag variable will be updated to 0
               flag = 0;
         }
  }

  if (flag == 1) {                //If the value of flag was 1 in the end , that means that the element was found in the array
        printf("The element was present in the array");
  }
  else {                         //If the value of flag remained 0 , that means that the element was not found in the array
        printf("The element was not present in the array");
  }
  return 0;
}

           
        













