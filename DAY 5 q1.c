//Write a program to calculate simple and compound interest with given principal,rate and time

#include <stdio.h>
#include <math.h>     //This header file enables the user to use math functions like pow() in our programs

int main() {
  double time,principal,rate;         //These all values can be in decimal form
  double tot_amount,si,ci;

  printf("Enter the time (in years):\n");
  scanf("%lf",&time);

  printf("Enter the principal amount:\n");
  scanf("%lf",&principal);

  printf("Enter the rate of interest(in%):\n");
  scanf("%lf",&rate);

  si=(principal*rate*time)/100.0;       //Calculating simple imterest with the help of principal,time and rate
  tot_amount=principal*pow((1+(rate/100.0)),time);     //Calculating Amount to use it to calculate Compound Interest
  ci=tot_amount-principal;
  printf("The final results are \n\n");
  printf("Principal amount=%.2lf\n",principal);
  printf("Interest rate=%.2lf\n",rate);
  printf("Time periood=%.2lf\n",time);
  printf("\n");
  printf("Simple Interest=%.2lf\n",si);
  printf("Compound Interest=%.2lf\n",ci);
  printf("Total Amount(with ci)=%.2lf\n",tot_amount);

 return 0;
}
     



