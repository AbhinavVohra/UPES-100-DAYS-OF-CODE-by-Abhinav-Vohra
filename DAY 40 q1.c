// Write a program to perform diagnol traversal of a matrix 

#include <stdio.h>
int main() {
    int r,c;
    printf("Enter the no of rows : ");
    scanf("%d",&r);
    printf("Enter the no of columns : ");
    scanf("%d",&c);
    
    
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0 ; i < r ; i++) {
        for (int j = 0 ; j < c ; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal (TOP-LEFT TO BOTTOM-RIGHT):\n");
    for (int k = 0 ; k < r ; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < c) {
            printf("%d ",matrix[i][j]);
            i = i - 1;
            j = j + 1;
        }
    }

    for (int k = 1 ; k < c ; k++) {
        int i = r - 1, j = k;
        while (i >= 0 && j < c) {
            printf("%d ",matrix[i][j]);
            i = i - 1;
            j = j + 1;
        }
    }

    printf("\n");
    return 0;
}
