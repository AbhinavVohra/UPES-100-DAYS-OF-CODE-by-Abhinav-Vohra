// Write a program to multiply two matrices.

#include <stdio.h>
int main() {
  int r1,c1;
  int r2,c2;

  printf("Enter the no of rows for the first matrix : ");
  scanf("%d",&r1);                      
  printf("Enter the no of columns for the first matrix : ");
  scanf("%d",&c1);                   
  int arr1[r1][c1];                       
  printf("Enter the elements of the first matrix :\n");
  for (int i = 0 ; i < r1 ; i = i + 1) {
        for (int j = 0 ; j < c1 ; j = j + 1) {
              scanf("%d",&arr1[i][j]);        
        }
  }

  printf("\nEnter the no of rows for the second matrix : ");
  scanf("%d",&r2);                         
  printf("Enter the no of columns for the second matrix : ");
  scanf("%d",&c2);                          
  int arr2[r2][c2];
  if (c1 != r2) {
       printf("Multiplication is not possible!!");
  }
  else {
       printf("\nEnter the elements of the second matrix :\n");
       for (int a = 0 ; a < r2 ; a = a + 1) {
             for (int b = 0 ; b < c2 ; b = b + 1) {
                  scanf("%d",&arr2[a][b]);      
             }
       }
       int result[r1][c2];
       for (int i = 0 ; i < r1 ; i = i + 1) {
             for (int j = 0 ; j < c2 ; j = j + 1) {
                  result[i][j] = 0;
             }
       }
       for (int i = 0 ; i < r1 ; i = i + 1) {
             for (int j = 0; j < c2; j = j + 1) {
                  for (int k = 0; k < c1; k = k + 1) {
                       result[i][j] =  result[i][j] + arr1[i][k] * arr2[k][j];
                  }
             }
       }
       printf("\nTHE MATRIX OBTAINED AFTER MULTIPLICATION\nOF THE TWO MATRICES :\n");
       for (int i = 0 ; i < r1 ; i = i + 1) {
             for (int j = 0 ; j < c2 ; j = j + 1) {
                  printf("%d ",result[i][j]);
             }
             printf("\n");
       }
  }
  return 0;
}

