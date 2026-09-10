//Write a program to merge two arrays

#include <stdio.h>
int main() {
  int n1,n2;

  printf("Enter the no of elements to be added in the first array : ");
  scanf("%d",&n1);

  int arr1[n1];       //Declaring the size of the first array based on user,s input n1

  printf("Enter %d elements :\n",n1);
  for (int i = 0 ; i < n1 ; i = i + 1) {
         scanf("%d",&arr1[i]);         //Accepting elements one by one into the array through the user,s input
  }

  printf("Enter the no of elements to be added in the second array : ");
  scanf("%d",&n2);

  int arr2[n2];             //Declaring the size of the second array based on user,s input n2

  printf("Enter %d elements :\n",n2);
  for (int j = 0 ; j < n2 ; j = j + 1) {
         scanf("%d",&arr2[j]);
  }

  int arr3[n1 + n2];          //The third array,s size will be the combined size of both the arrays obtained from taking the sum of their sizes

  for (int a = 0 ; a < n1 ; a = a + 1) {
         arr3[a] = arr1[a];             //Taking the elements of the first array in the third\merged array one by one
  }

  for (int b = 0 ; b < n2 ; b = b + 1) {
         arr3[n1 + b] = arr2[b];   }   /* Taking the elements of the second array in the third\merged array one by one
  We are using [n1 + b] so that all the elements of 2nd array align in the 3rd array after the indeces of the first array have been finished */

  printf("Array 1 :\n");
  for (int f = 0 ; f < n1 ; f = f + 1) {
         printf("%d ",arr1[f]);
  }

  printf("\nArray 2 :\n");
  for (int g = 0 ; g < n2 ; g = g + 1) {
         printf("%d ",arr2[g]);
  }

  printf("\nMerged Array :\n");
  for (int h = 0 ; h < n1 + n2 ; h = h + 1) {
         printf("%d ",arr3[h]);             //Now , the third/merged array contains the elements of both the first and the second arrays in it
  }

  return 0;
}

  






















  
