// Write a program to rotate an array to the right by k position

#include <stdio.h>
int main() {
    int n;
    printf("Enter the no of elements to be entered in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :\n");
    for (int i = 0 ; i < n ; i = i + 1) {
         scanf("%d",&arr[i]);
    }
    int k;
    printf("\nEnter the position from which the array has to be rotated to the right : ");
    scanf("%d",&k);
    printf("ORIGINAL ARRAY : ");
    for (int j = 0 ; j < n ; j = j + 1) {
         printf("%d ",arr[j]);
    }
    printf("\n");
    int start, end, temp;

    if (k <= n) {
        start = 0;
        end = n - 1;
        while (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start = start + 1;
            end = end - 1;
        }

        start = 0;
        end = k - 1;
        while (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start = start + 1;
            end = end - 1;
        }

        start = k;
        end = n - 1;
        while (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start = start + 1;
            end = end - 1;
        }
        printf("ROTATED ARRAY : ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else {
        printf("Invalid position entered!!");
    }
    return 0;
 }
