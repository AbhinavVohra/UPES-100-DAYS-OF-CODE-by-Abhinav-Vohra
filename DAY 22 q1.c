//Write a program to check if a number is a strong number

#include <stdio.h>
int main() {
  int n;
  int fac=1;                 //fac is set to 1 to obtain the factorial of the digits
  int sum=0;                 //sum is set to 0 to obtain the sum of the factorial of digits
  int count=1;               //count is used as a start to obtain the factorial of the digit
  int rem;                   //rem extracts the digits from the number
  int z;

  printf("Enter the number : ");
  scanf("%d",&n);

  z = n;                    //We have taken a copy of the original number in z so that we can compare it with the sum later 
  while (n > 0) {
        rem = n % 10;
        fac = 1;            //We will have to set the fac back to 1 so that it does not count the factorial of all digits combined
        count = 1;          //We will have to reset the count too so that it starts fromm 1 again
        while (count <= rem) {
               fac = fac * count;
               count = count + 1;
        }
        sum = sum + fac;      //At the end, sum will hold the sum of the fatorials of all the digits of the number
        n = n / 10;
  }
  if (z == sum) {             //If the sum of factorials of all digits is equal to the number itself, then it is a strong number
        printf("Number is a strong number");
  }
  else {
        printf("Number is not a strong number");
  }
  return 0;
}
         
