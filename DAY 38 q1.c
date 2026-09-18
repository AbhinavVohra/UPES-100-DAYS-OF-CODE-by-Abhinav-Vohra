//Write a program to add 2 matrices

#include <stdio.h>
int main() {
  int r1,c1;
  int r2,c2;

  printf("Enter the no of rows for the first matrix : ");
  scanf("%d",&r1);                        //Rows of first matrix will be the outer index for array 1

  printf("Enter the no of columns for the first matrix : ");
  scanf("%d",&c1);                        //Columns of first matrix will be the inner index for array 2

  int arr1[r1][c1];                       //Creating matrix 1/array 1 based on r1 and c1

  printf("Enter the elements of the first matrix :\n");
  for (int i = 0 ; i < r1 ; i = i + 1) {
        for (int j = 0 ; j < c1 ; j = j + 1) {
              scanf("%d",&arr1[i][j]);         //Accepting elements one by one into matrix 1/array 1 through user,s input
        }
  }

  printf("Enter the no of rows for the second matrix : ");
  scanf("%d",&r2);                          //Rows of second matrix will be the outer index for array 2

  printf("Enter the no of columns for the second matrix : ");
  scanf("%d",&c2);                          //Columns of second matrix will be the inner index for array 2

  int arr2[r2][c2];                  //Creating matrix 2/array 2 based on r2 and c2

  if (r1 == r2 && c1 == c2) {           //Matrix addition is only possible if no of rows and columns of first matrix are equal to those of second matrix
         printf("Enter the elements of the second matrix :\n");
         for (int a = 0 ; a < r2 ; a = a + 1) {
               for (int b = 0 ; b < c2 ; b = b + 1) {
                    scanf("%d",&arr2[a][b]);       //Accepting elements one by one into matrix 2/array 2 through user,s input
               }
         }

         int arr3[r1][c1];              //The third matrix will have no of rows and columns equal to those of matrix 1 and 2

         for (int k = 0 ; k < r1 ; k = k + 1) {
               for (int l = 0 ; l < c1 ; l = l + 1) {
                    arr3[k][l] = arr1[k][l] + arr2[k][l];         //Containing the sum of elements of same indexes of matrix 1 and 2 in matrix 3
               }
         }

         printf("The Matrix obtained after adding the first two matrices is :\n");
         for (int q = 0 ; q < r1 ; q = q + 1) {
               for (int w = 0 ; w < c1 ; w = w + 1) {
                    printf("%d ",arr3[q][w]);          
               }
               printf("\n");
         }
  } 
  else {              //Matrix addition not possible when no of rows and columns of first and second matrix are not equal
         printf("The order of both the matrices should be equal!!");  
  }
  return 0;
  }
                     
   






