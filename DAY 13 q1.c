//Write a program to create a simple calculator using switch case for +,-,*,/,%

#include <stdio.h>
int main () {
  char operate;               //Operators are treated as characters 
  int a,b;                    //We are taking both the numbers as non decimal values because '%' Operator is not applicable on decimal values      

  printf("Enter the first number :");
  scanf("%d",&a);
  printf("Enter the second number :");
  scanf("%d",&b);
  
  printf("Enter the Operator :");
  scanf(" %c",&operate);                  /*We are using space before %c so that the scanf receives a \n or else it will skip the "Enter the Operator" line 
                                          and will execute default after receiving \n which is an invalid data type according to this question*/
  switch (operate) {
      case '+':
          printf("%d + %d = %d",a,b,a + b);
          break;
      case '-':
          printf("%d - %d = %d",a,b,a - b);
          break;
      case '*':
          printf("%d * %d = %d",a,b,a * b);
          break;
      case '/':
          printf("%d / %d = %d",a,b,a / b);
          break;
      case '%':
          printf("%d %% %d = %d",a,b,a % b);        // %% is used so that the operator does not get misunderstood as a format specifier
          break;
      default:
          printf("The operator entered is invalid!!");
  }
  return 0;
}







        
