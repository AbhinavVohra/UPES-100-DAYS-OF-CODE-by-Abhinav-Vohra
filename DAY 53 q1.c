/* Write a Program to take an array of integers as input, calculate the pivot index of this array.
   The pivot index is the index where the sum of all the numbers strictly to the left of the index is
   equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge
   of the array, then the left sum is 0 because there are no elements to the left.
   This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. */

#include <stdio.h>
int main() {
    int arr[100], n, i, j;
    int total = 0, left = 0, right, pivot = -1;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d",&arr[i]);
        total = total + arr[i];
    }
    for (i = 0; i < n; i++) {
        right = total - left - arr[i];
        if (left == right) {
            pivot = i;
            break;
        }
        left = left + arr[i];
    }
    printf("Pivot index: %d", pivot);
    return 0;
}
