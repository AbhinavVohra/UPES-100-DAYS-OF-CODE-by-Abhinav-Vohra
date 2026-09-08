//Write a program to count positive , negative and zero numbers in an array

#include <stdio.h>
int main () {
  int n;
  int c1=0;
  int c2=0;
  int c3=0;

  printf("Enter the no of numbers to be entered in the array : ");
  scanf("%d",&n);

  int arr[n];         //Declaring the size of the array based on the n input from the user

  printf("Enter %d elements :\n",n);
  for (int i = 0 ; i < n ; i = i + 1) {
         scanf("%d",&arr[i]);           //Accepting the elements of the array one by one as entered by the user
  }

  for (int j = 0 ; j < n ; j = j + 1) {
         if (arr[j] > 0) {           //If number will the be positive , it will be counted in the c1 variable
              c1 = c1 + 1;
         }
         else if (arr[j] < 0) {
              c2 = c2 + 1;           //If the number will be negative , it will be counted in the c2 variable 
         }
         else {
              c3 = c3 + 1;           //If the number will be equivalent to 0 , it will be counted in the c3 variable
         }
  }
  printf("The no of positive numbers in the array : %d\n",c1);
  printf("The no of negative numbers in the array : %d\n",c2);
  printf("The no of zeros in the array : %d",c3);
  return 0;
}
               
