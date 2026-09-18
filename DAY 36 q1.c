//Write a program to read and print a matrix

#include <stdio.h>
int main() {
  int r,c;

  printf("Enter the no of rows in the array : ");
  scanf("%d",&r);                       //Rows will be the outer index of the array/matrix

  printf("Enter the no of columns in the array : ");
  scanf("%d",&c);                      //Columns will be the inner index of the matrix

  int arr[r][c];                   //Declaring the matrix based on rows and columns entered

  printf("Enter the elements : ");
  for (int i = 0 ; i < r ; i = i + 1) {
        for (int j = 0 ; j < c ; j = j + 1) {
              scanf("%d",&arr[i][j]);                //Taking the elements as input one by one
        }
  }

  printf("The elements of the matrix are :\n");
  
  for (int m = 0 ; m < r ; m = m + 1) {
        for (int n = 0 ; n < c ; n = n + 1) {
              printf("%d ",arr[m][n]);             //Printing the elementds in matrix/row and column format
        }
        printf("\n");
  }
  return 0;
}
