//Write a program to calculate electricity bill based on its units consumed

#include <stdio.h>
int main () {
  float units,price;                             //The units entered and the price can be either decimal or non decimal
  printf("Enter the amount of units consumed:");
  scanf("%f",&units);

  if (units >= 1 && units <= 100) {              //The rate for the first 100 units is ₹5/unit
        price = 5 * units;
        printf("The total price is : ₹%.2f",price);
  }
  else if (units > 100 && units <=200) {         //The rate for the next 100 units is ₹7/unit
        price = (7 * units - 7 * 100) + 5 * 100;
        printf("The total price is : ₹%.2f",price);
  }
  else if (units > 200 && units <= 300) {         //The rate for the next 100 units is ₹10/unit
        price = (10 * units - 10 * 200) + (5 * 100 + 7 * 100);
        printf("The total price is : ₹%.2f",price);
  }
  else if (units > 300) {                         //The rate for the units above these is ₹12/unit
        price = (12 * units -12 * 300) + (5 * 100 + 7 * 100 + 10 * 100);
        printf("The total price is : ₹%.2f",price);
  }
  else {                                          //If the no of units doesnt satisfy any of the above conditions then no price will be applicable to it
        printf("There is no applicable price for the no of units entered");
  }
  return 0;
}





