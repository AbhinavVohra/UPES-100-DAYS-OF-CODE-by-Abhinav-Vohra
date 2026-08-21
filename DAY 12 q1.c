//Write a program to calculate library fine based on late days

#include <stdio.h>
int main () { 
  int days,fine;                     //Both the no of days and fine price are non decimal values
  printf("Enter the no of extra days the book has not been returned till:");
  scanf("%d",&days);

  if (days >= 1 && days <=5) {                        //For the first 5 days, the fine rate is ₹2/day
       fine = 2 * days;
       printf("The total fine is : ₹ %d",fine);
  }
  else if (days > 5 && days <= 10) {              //For the next 5 days, the fine rate is ₹4/day
       fine = (4 * days - 4 * 5) + 2 * 5;
       printf("The total fine is : ₹ %d",fine);
  }
  else if (days > 10 && days <= 30) {               //For the next 20 days, the fine rate is ₹6/day
       fine = (6 * days - 6 * 10) + (2 * 5) + (4 * 5);
       printf("The total fine is : ₹ %d",fine);
  }
  else if (days > 30) {                              //Membership gets cancelled if a book is borrowed for more than 30 days
       printf("Your library membership has been cancelled");
  }
  else {                                             //There will be no amount of fine charged if the no of days doesnt exceed the limit            
       printf("There is no amount of fine for the no of late days entered");
  }
  return 0;
}
