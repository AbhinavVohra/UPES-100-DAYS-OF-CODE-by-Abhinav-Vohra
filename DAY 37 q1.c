//Write a program to find the sum of each row in a matrix and store it in an array

#include <stdio.h>
int main() {
  int r,c;

  printf("Enter the no of rows : ");
  scanf("%d",&r);                 //No of rows will be the outer index for array 1

  printf("Enter the no of columns : ");
  scanf("%d",&c);                 //No of columns will be the inner index for array 1

  int arr1[r][c];                //Declaring the first array based on the no of rows and columns entered

  printf("Enter the elements :\n");
  for (int i = 0 ; i < r ; i = i + 1) {
        for (int j = 0 ; j < c ; j = j + 1) {
              scanf("%d",&arr1[i][j]);          //Accepting the elements one by one into the array
        }
  }

  int arr2[r][1];         /*Declaring a second array which will have no of rows equal to that in the first array so that it will only contain 
                            the sum of the elements of the rows of the first array as single elements in each row*/
  
  for (int m = 0 ; m < r ; m = m + 1) {
        int sum = 0;           //Sum will reset to 0 after every row
        for (int n = 0 ; n < c ; n = n + 1) {
              sum = sum + arr1[m][n];          //The sum of the current row of the first arrayw will be contained in sum for one iteration
        }
        arr2[m][0] = sum;              //The single element of a row in array 2 be updated with the sum of current row in array 1 
  }

  printf("The new array formed is :\n");
  for (int h = 0 ; h < r ; h = h + 1) {
        printf("%d\n",arr2[h][0]);        /*The second array printed will contain rows equal to that in array 1 just having a single element in each row 
                                             equivalent to the sum of a row in array 1*/
  }
  return 0;
}

              










  
