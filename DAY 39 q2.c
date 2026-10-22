// Write a program to find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main() {
  int r,c;
  printf("Enter the no of rows : ");
  scanf("%d",&r);
  printf("Enter the no of columns : ");
  scanf("%d",&c);
  int arr[r][c];
  printf("Enter the elements :\n");
  for (int i = 0 ; i < r ; i = i + 1) {
       for (int j = 0 ; j < c ; j = j + 1) {
             scanf("%d",&arr[i][j]);
       }
  }
  printf("\nTHE MATRIX :\n");
  for (int a = 0 ; a < r ; a = a + 1) {
       for (int b = 0 ; b < c ; b = b + 1) {
             printf("%d ",arr[a][b]);
       }
       printf("\n");
  }

  int sum;
  sum = 0;
  for (int x = 0 ; x < r ; x = x + 1) {
       for (int y = 0 ; y < c ; y = y + 1) {
             if (x == y) {
                  sum = sum + arr[x][y];
             }
       }
  }
  printf("The sum of the elements of the main diagnol : %d",sum);
  return 0;
}











  
