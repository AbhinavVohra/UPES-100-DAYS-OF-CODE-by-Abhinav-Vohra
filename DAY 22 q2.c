//Write a program to find the sum of the series : 1 + 3/4 + 5/6 + 7/8 + ......... upto n terms

#include <stdio.h>
int main() {
  int n;
  float sum=1.0;                 //sum will start from 1 as the first term in the series will be 1
  int count=1;                   //count will check whether the no of terms is less than or equal to n
  int pattern=3;                 //pattern will decide what the numerator and denominator of the upcoming terms in the series will be

  printf("Enter the number of terms till which the sum of the series has to be calculated : ");
  scanf("%d",&n);

  while(count < n) {                                         //as 1 is already the first term, we can go till n - 1
        sum = sum + ((float)pattern/(float)(pattern + 1));   //denominator is always 1 more than the numerator
        count = count + 1;
        pattern = pattern + 2;                               //Both the numerator and denominator are increasing by 2
  }
  printf("The approximate sum of the series is : %.2f",sum);
  return 0;
}
