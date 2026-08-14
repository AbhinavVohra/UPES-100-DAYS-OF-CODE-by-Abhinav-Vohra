//Write aprogram to swap two numbers using a third variable

#include <stdio.h>
int main() {
  int a,b,third;   //a and b are user entered numbers which have to be swapped using third variable
  printf("Enter the first number:");
  scanf("%d",&a);

  printf("Enter the second number:");
  scanf("%d",&b);

  printf("Numbers before swapping:");    //Displaying the numbers before swapping
  printf("First number:%d\n",a);
  printf("Second number:%d\n",b);

  third=a;  //Copying first number to third variable
  a=b;      //Copying second number to first number
  b=third;   //Copying third variable(First number,s original value) to second number
      
  printf("Numbers after swapping:");  //Printing both the numbers after swapping them
  printf("First Number:%d\n",a);
  printf("Second Number:%d\n",b);

  return 0;

}

