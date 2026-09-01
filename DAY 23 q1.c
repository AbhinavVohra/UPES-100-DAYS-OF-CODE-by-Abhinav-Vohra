//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
  int n;
  double sum=0.0;          //approximate sum will come as a decimal because of float division

  printf("Enter the number till which the sum of the series is required : ");
  scanf("%d",&n);

  for (int i = 1 ; i <= n ; i = i + 1) {
         double numerator = (2.0 * i);               //A numerator variable of double data type is assigned so that the numerator increases progressively
         double denominator = (4.0 * i) - 1.0;       //A denominator variable of double data type is assigned so that the denominator increases progressively
         sum = sum + (numerator/denominator);
  }
  printf("The approx. sum of the series is : %.2f",sum);         //The sum will be approx. and will have a value in decimal
  return 0;
}
