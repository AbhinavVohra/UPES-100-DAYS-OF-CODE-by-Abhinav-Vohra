//Write a program to find the second largest element in an array 

#include <stdio.h>
int main() {
int n;

printf("Enter the no of elements to be added in the array : ");
scanf("%d",&n);

int arr[n];        //Declaring an array of size n , where n is user,s input 

printf("Enter %d elements :\n",n);
for (int i = 0 ; i < n ; i = i + 1) {
      scanf("%d",&arr[i]);          //Accepting elements one by one into the array through user input
}

printf("ARRAY :\n");
for (int y = 0 ; y < n ; y = y + 1) {
      printf("%d ",arr[y]);        //Displaying the array
}

int max1,max2;
max1 = arr[0];           //Assuming the maximum element to be at the 0th index intitially

for (int j = 0 ; j < n ; j = j + 1) {
      if (arr[j] > max1) {
           max1 = arr[j];              //Comparing elements to each other to find the maximum element
      }
}

for (int k = 1 ; k < n ; k = k + 1) {       //Here , k starts from 0 so that it compares with 0th index element also
      if (arr[k] > arr[k-1] && arr[k] < max1) {       
           max2 = arr[k];  //Comparing elements only to get an element which is greater than all the elements except for the maximum element which we found out through max1
      }
}

printf("\nThe second largest element in the array is : %d",max2);
return 0;
}


     
          
