//Write a program to find the transpose of a matrix

#include <stdio.h>
int main() {
  int r,c;

  printf("Enter the no of rows : ");
  scanf("%d",&r);                //Rows will be the outer index of array 1 

  printf("Enter the no of columns : ");
  scanf("%d",&c);                //Columns will be the inner index of array 1

  int arr1[r][c];                //Declaring the size of array 1 based on no of rows and columns
 
  printf("Enter the elements :\n");
  for (int i = 0 ; i < r ; i = i + 1) {
      for (int j = 0 ; j < c ; j = j + 1) {
            scanf("%d",&arr1[i][j]);        //Taking the elements into array 1 one by one through user input
      }
  }

  printf("The original matrix :\n");
  for (int a = 0 ; a < r ; a = a + 1) {
       for (int b = 0 ; b < c ; b = b + 1) {
            printf("%d ",arr1[a][b]);       //Printing the original matrix/array 1
       }
       printf("\n");
  }

  int arr2[c][r];             /* Array 2 is a transpose matrix of Array 1 because of which it has no of rows equal to no of columns of array 1 
                                and no of columns equal to no of rows in array 1 */

  for (int z = 0 ; z < r ; z = z + 1) {
       for (int x = 0 ; x < c ; x = x + 1) {
            arr2[x][z] = arr1[z][x];            //Now , array 2 has obtained the transpose of array 1
       }
  }

  printf("Transpose of this matrix :\n");
  for (int s = 0 ; s < c ; s = s + 1) {
       for (int d = 0 ; d < r ; d = d + 1) {
            printf("%d ",arr2[s][d]);   //Printing the elements of array 2 with outer loop for the column no of array1 and innner loop for row no of array1
       }
       printf("\n");
  }
  return 0;
}
        
  










