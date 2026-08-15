//Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>
int main() {
  int tot_seconds;           //These values will be received without a decimal
  int hours,minutes,seconds;

  printf("Enter the time in seconds:");
  scanf("%d",&tot_seconds);
  if (tot_seconds<1) {                                   //We cant calculate hours,minutes and seconds if the time is entered in negative value
       printf("The amount of seconds entered is invalid!!");
       return 1;
  }

  hours=tot_seconds/3600;         //Dividing the total time by 3600 gives us the amount of hours
  minutes=(tot_seconds%3600)/60;   //tot_seconds%3600 will give the remainder left after dividing by 3600 and further /60 will give the leftover minutes after hours
  seconds=tot_seconds%60;         //This will give us the remainder which means the amount of seconds left after hours and minutes

  printf("Time in hours:minutes:seconds format   :>   %d : %d : %d\n",hours,minutes,seconds);   
  return 0;
}
  
  
