// Check if a matrix is symmetric.

#include <stdio.h>
int main() {
  int r,c;
  printf("Enter the no of rows : ");
  scanf("%d",&r);
  printf("Enter the no of columns : ");
  scanf("%d",&c);
  int m1[r][c];
  printf("\nEnter the elements :\n");
  for (int i = 0 ; i < r ; i = i + 1) {
       for (int j = 0 ; j < c ; j = j + 1) {
             scanf("%d",&m1[i][j]);
       }
  }
  printf("\nTHE MATRIX :\n");
  for (int e = 0 ; e < r ; e = e + 1) {
       for (int w = 0 ; w < c ; w = w + 1) {
             printf("%d ",m1[e][w]);
       }
       printf("\n");
  }
  int m2[r][c];
  for (int a = 0 ; a < r ; a = a + 1) {
       for (int b = 0 ; b < c ; b = b + 1) {
             m2[a][b] = m1[a][b];
       }
  }
  int temp;
  for (int x = 0 ; x < r ; x = x + 1) {
        for (int y = 0 ; y < c ; y = y + 1) {
              temp = m1[x][y];
              m1[x][y] = m1[y][x];
              m1[y][x] = temp;
        }
  }
  int flag = 1;
  for (int d = 0 ; d < r ; d = d + 1) {
         for (int s = 0 ; s < c ; s = s + 1) {
              if (m1[d][s] != m2[d][s]) {
                   flag = 0;
                   break;
              }
         }
         if (flag == 0) {
              break;
         }
  }
  if (flag == 0) {
         printf("Matrix is not symmetric");
  }
  else {
         printf("Matrix is symmetric");
  }
  return 0;
}
         







