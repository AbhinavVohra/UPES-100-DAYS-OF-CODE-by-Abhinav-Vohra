/* Write a program to take a sorted array and an integer as inputs.
The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present. */

#include <stdio.h>
void arrsearch(int a[],int n,int t);
int main() {
      int n;
      printf("Enter the number of elements in the array : ");
      scanf("%d",&n);
      int arr[n];
      printf("Enter the elements :\n");
      for (int i = 0 ; i < n ; i = i + 1) {
            scanf("%d",&arr[i]);
      }
      int target;
      printf("\nEnter the target no(which is to be searched : ");     
      scanf("%d",&target);
      arrsearch(arr,n,target);
      return 0; 
}
void arrsearch(int a[],int n,int t) {
      int freq;
      int p1,p2;
      freq = 0;
      for (int i = 0 ; i < n ; i = i + 1) {
            if (a[i] == t) {
                 freq = freq + 1;
                 if (freq == 1) {
                      p1 = i;
                 }
                 else if (freq == 2) {
                      p2 = i;
                 }
            }
      }
      if (freq == 1) {
            printf("%d,%d",p1,p1);
      }
      else if (freq == 2) {
            printf("%d,%d",p1,p2);
      }
      else {
            printf("-1,-1");
      }
}

   
           
      
