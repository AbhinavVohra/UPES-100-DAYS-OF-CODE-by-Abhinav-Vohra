//Write a program to find the LCM of two numbers

#include <stdio.h>
int main () {
  int num1,num2;
  int lcm;                           //lcm variable will be used for the final result
 
  printf("Enter the first number : ");
  scanf("%d",&num1);
  printf("Enter the second number : ");
  scanf("%d",&num2);

  if (num1 > num2) {                //As lcm cannot be smaller than any of the numbers, we will first assume the lcm to be the smaller number and then increment it
       lcm = num2;
  }
  else {
       lcm = num1;
  }
  while (1) {                      //This loop will never end as (1) always stays true because of which we ae using break statement in the loop 
        if (lcm % num1 == 0 && lcm % num2 == 0) {    //If the current value of lcm variable is completely divisible by both num1 and num2 then it will be considered the LCM
                 printf("LCM is : %d",lcm);
                 break;
        }
        lcm = lcm + 1;             //We will keep increasing the value of lcm to check which value of lcm is completely divisible by both num1 and num2
  }
  return 0;
}
                 

  
