//Write a program to find the sum of all elements in a matrix 

#include <stdio.h>
int main() {
  int r,c;
  int sum=0;

  printf("Enter the no of rows : ");
  scanf("%d",&r);                    //Rows will be the outer index of the array

  printf("Enter the no of columns : ");
  scanf("%d",&c);                   //Columns will be the inner index of the array

  int arr[r][c];                   //Declaring the array/matrix based on the no of rows and columns entered

  printf("Enter the elements :\n");
  for (int i = 0 ; i < r ; i = i + 1) {
        for (int j = 0 ; j < c ; j = j + 1) {
              scanf("%d",&arr[i][j]);           //Take the elements as input one by one 
        }
  }

  for (int m = 0 ; m < r ; m = m + 1) {
        for (int n = 0 ; n < c ; n = n + 1) {
              sum = sum + arr[m][n];            //Adding the elements in matrix one by one in the variable sum
        }
  }

  printf("The sum of the elements is : %d",sum);
  return 0;
}




