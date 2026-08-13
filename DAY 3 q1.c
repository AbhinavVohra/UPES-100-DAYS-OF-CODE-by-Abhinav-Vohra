// Write a program to convert tempereature from celcius to fahrenheit
#include <stdio.h>

int main() {

  float celcius,fahrenheit;                      //Declaring celcius as a double data type
  printf("Enter the temperature in celcius");      
  scanf("%f",&celcius);                     //Asking from the user to enter the temperature in celcius
  fahrenheit=(celcius*9.0/5.0)+32.0;        //Using 9.0 amd 5.0 to ensure floating point division
  printf("Temp in Fahrenheit = %.2f",fahrenheit);    //Printing the temperature aFter converting into fahrenheit

  return 0;
}
