/* Write a Program to take a sorted array arr[] and an integer x as input,
  find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
  This element is called the ceil of x. If such an element does not exist, print -1.
  Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. */

#include <stdio.h>
int main() {
    int arr[100], n, x, i, index = -1;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the sorted array elements:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d",&x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }
    printf("Ceil index: %d", index);
    return 0;
 }
