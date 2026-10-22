// Write a program to find whether the elements of the main diagnol are distinct

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
  int flag;
  flag = 1;
  for (int x = 0 ; x < r ; x = x + 1) {
       for (int y = 0 ; y < c ; y = y + 1) {
             if (arr[0][0] == arr[r-1][r-1] || arr[r-1][r-1] == arr[r-2][r-2] || arr[0][0] == arr[r-2][r-2]) {
                   flag = 0;
             }
       }
  }
  if (flag == 1) {
       printf("Elements of the main diagnol are distinct");
  }
  else {
       printf("Elements of the main diagnol are not distinct");
  }
  return 0;
}
