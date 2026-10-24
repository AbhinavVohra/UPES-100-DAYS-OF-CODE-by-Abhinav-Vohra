/* Write a program to take an integer array nums which contains
   only positive integers, and an integer target as inputs. The
   goal is to find two distinct indices i and j in the array such
   that nums[i] + nums[j] equals the target. Assume exactly one
   solution exists and return the indices in any order. Print the 
   two indices separated by a space as output. If no solution 
   exists, print "-1 -1". */


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
    int target;
    printf("Enter the target value : ");
    scanf("%d",&target);

    int flag = 0;
    for (int i = 0 ; i < n ; i = i + 1) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n",i,j);
                flag = 1;
                break; 
            }
        }
        if (flag == 1) {
            break; 
        }
    }
    if (flag == 0) {
        printf("-1 -1\n");
    }
    return 0;
}
