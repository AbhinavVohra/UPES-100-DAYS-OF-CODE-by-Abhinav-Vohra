/* Write a Program to take a sorted array arr[] and an integer x as input,
  find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
  This element is called the ceil of x. If such an element does not exist, print -1.
  Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. */

#include <stdio.h>
void findindex(int a[],int n,int x);                       //NEEDS CORRECTION!!!
int main() {
   int n;
   printf("Enter the no of elements to be entered in the array : ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements :\n");
   for (int i =  0 ; i < n ; i = i + 1) {
        scanf("%d",&arr[i]);
   }
   int x;
   printf("\nEnter the Integer whose ceil has to be found : ");
   scanf("%d",&x);
   findindex(arr,n,x);
   return 0; 
}
void findindex(int a[],int n,int x) {
   int index;
   int flag = 0;
   for (int j = 0 ; j < n ; j = j + 1) {
         if (x > a[j]) {
              for (int i = j ; i < n ; i = i + 1) {
                    if (x < a[i]) {
                        flag = 1;
                    }
                    else {
                        break;
                    }
              }
         }
         if (flag == 1) {
              index = j;
         }
   }
   printf("The index of the ceil of %d : %d",x,index);
}








