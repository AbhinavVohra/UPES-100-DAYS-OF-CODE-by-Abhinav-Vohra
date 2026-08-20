//Write a program to display the month name and number of days using switch case for a given month number

#include <stdio.h>
int main () {
  int month;                                          //A non decimal number will be entered by the user
  printf("Enter a number from 1 to 12 to select the month:");
  scanf("%d",&month);

  switch (month) {
      case 1:                                                  //January is the first month and has 31 days
           printf("The month is January \nNo of Days: 31");
           break;
      case 2:                                                  //February is the second month and has 28 days in a normal year and 29 in a leap year
           printf("The month is February \nNo of Days: 28/(29 in a leap year)");
           break;
      case 3:                                                  //March is the third month and has 31 days
           printf("The month is March \nNo of Days: 31");
           break;
      case 4:                                                  //April is the fourth month and has 30 days
          printf("The month is April \nNo of Days: 30");
          break;
      case 5:                                                  //May is the fifth month and has 31 days
          printf("The month is May \nNo of Days: 31");
          break;
      case 6:                                                  //June is the sixth month and has 30 days
          printf("The month is June \nNo of Days: 30");
          break;
      case 7:                                                  //July is the seventh month and has 31 days,equal to the days in August(an exception)
          printf("The month is July \nNo of Days: 31");
          break;
      case 8:                                                  //August is the eighth month and has 31 days,equal to the days in July(an exception)
          printf("The month is August \nNo of Days: 31");
          break;
      case 9:                                                  //September is the ninth month and has 30 days
          printf("The month is September \nNo of Days: 30");
          break;
      case 10:                                                 //October is the tenth month and has 31 days
          printf("The month is October \nNo of Days: 31");
          break;
      case 11:                                                 //November is the eleventh month and has 30 days
          printf("The month is November \nNo of Days: 30");
          break;
      case 12:                                                 //December is the twelvth/last month of the year and has 31 days
          printf("The month is December \nNo of Days: 31");
          break;
      default:                                      //If a number entered doesnt satisfy any of the conditions above,it will be considered invalid
          printf("The no entered is invalid!!");
  }
  
  return 0;
}
