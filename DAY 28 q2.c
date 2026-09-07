//Write a program to read and print all the elements of an array

#include <stdio.h>
  int arr[] = {10,20,30,40,50}

  int length = (sizeof(arr) / sizeof(arr[0]));
  printf("%d\n",length);

  for (int i = 0 ; i < length ; i = i + 1) {
        printf("%d ",arr[i]);
  }
  

  
