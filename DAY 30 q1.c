//Write a program to count even and odd numbers in an array

#include <stdio.h>
int main() {
  int n;
  int c1=0,c2=0;

  printf("Enter the no of numbers to be entered in the array :");
  scanf("%d",&n);

  int arr[n];            //Declaring the size of the array based on the input n by the user

  printf("Enter %d elements :\n",n);
  for (int i = 0 ; i < n ; i = i + 1) {
         scanf("%d",&arr[i]);             //Accepting the elements of array one by one by the user 
  }

  for (int j = 0 ; j < n ; j = j + 1) {
         if (arr[j] % 2 == 0) {          //If number is divisible by 2 , then it will be counted in the c1 variable
               c1 = c1 + 1;
         }
         else {                         //If number not divisible by 2 , then it will be counted in the c2 variable
               c2 = c2 + 1;
         }
  }
  printf("The no of even numbers in the array : %d\n",c1);
  printf("The no of odd numbers in the array : %d",c2);
  return 0;
}












        
