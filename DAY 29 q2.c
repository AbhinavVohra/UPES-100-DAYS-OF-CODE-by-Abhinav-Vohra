//Write a program to find and print the largest and the smallest element of an array

#include <stdio.h>
int main() {
    int size,i;
    int largest,smallest;

    printf("Enter the number of elements to be entered in the array : ");
    scanf("%d",&size);

     int arr[size];      //Declaring the size of the array bases on the value of size entered

    printf("Enter %d elements :\n",size);
    for (i = 0 ; i < size ; i = i + 1) {     //Accepting the elements of array through user,s input
          scanf("%d",&arr[i]);
    }

    largest = arr[0];         //At the start , we have assumed the first element of the array to be the largest element of the array
    smallest = arr[0];        //At the start , we have assumed the first element to be the smallest element of the array also

    for (i = 1 ; i < size ; i = i + 1) {
          if (arr[i] > largest) {            //We will surf through the array comparing each element with its previous element to check if its greater or not
                largest = arr[i];
          }
          if (arr[i] < smallest) {           //Similarly , we will surf through the array comparing each element with its previous element to check if its smaller or not
                smallest = arr[i];
          }
    }
    printf("The largest element is : %d\n",largest);       
    printf("The smallest element is : %d\n",smallest);
    return 0;
}
    

