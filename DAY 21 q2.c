//Write a program to check if a number is a perfect number

#include <stdio.h>
int main () {
  int n;
  int count=1;                 //We will start the count from 1 to check for the factors of the number
  int sum=0;                   //We will add the factors one by one to sum variable

  printf("Enter the number : ");
  scanf("%d",&n);

  while (count < n) {
        if (n % count == 0) {         //If count divides n completely(is a factor of n) , it will be added to sum
            sum = sum + count;
        }
        count = count + 1;
  }
  if (sum == n) {                     //If the sum of the factors of the number is equal to the number itself , then it is a perfect number
        printf("Number is a perfect number");
  }
  else {
        printf("Number is not a perfect number");
  }
  return 0;
}
