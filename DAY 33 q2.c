// Write a program to insert an element in an array at the appropriate position

#include <stdio.h>
int main() {
    int size, i, element;
    printf("Enter the current number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
  
    printf("Enter the sorted elements (in ascending order):\n");
    for (i = 0 ; i < size ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
  
    i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    arr[i + 1] = element;
    size = size + 1; 
    printf("\nArray after inserting %d:\n", element);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
