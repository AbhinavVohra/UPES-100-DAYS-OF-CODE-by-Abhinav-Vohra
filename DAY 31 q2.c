//Write a program to reverse the same array without taking extra space

#include <stdio.h>
int main() {
  int n,temp;

  printf("Enter the no of numbers to be entered in the array : ");
  scanf("%d",&n);                       

  int arr[n];                   //Declaring the size of the array based on the number n through user,s input

  printf("Enter %d elements :\n",n);
  for (int i = 0 ; i < n ; i = i + 1) {
         scanf("%d",&arr[i]);            //Accepting elements one by one into the array through user,s input
  }

  printf("Array in default order :\n");
  for (int a = 0 ; a < n ; a = a + 1) {        
         printf("%d ",arr[a]);              //Printing the array in the default form
  }
                                              /* Here , we are iterating till the half of the array because the first half will be gradually exchanged with the second
                                                 half as j will increase */
  for (int j = 0 ; j < (n / 2) ; j = j + 1) {    
         temp = arr[j];
         arr[j] = arr[(n - 1) - j];     // (n - 1) means the last term so with each iteration , the value from the icreased index from the start will be exchanged with the value of decreased index from the last again and again      
         arr[(n - 1) - j] = temp;
  }

  printf("\nReversed Array :\n");
  for (int k = 0 ; k < n ; k = k + 1) {
         printf("%d ",arr[k]);                //Printing the Reversed array finally
  }

  return 0;
}
  
