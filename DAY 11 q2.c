//Write a program to find profit or loss percentage given cost price and selling price

#include <stdio.h>
int main() {
  double cost_p,sell_p;                                          //These all values can be either decimal or non decimal values
  double loss,profit,profit_p,loss_p;

  printf("Enter the cost price of the product:");
  scanf("%lf",&cost_p);

  printf("Enter the selling price of the product:");
  scanf("%lf",&sell_p);

  if (cost_p > sell_p) {                            //If the selling price is less than the original price of product, then a LOSS has occurred       
        loss = cost_p - sell_p;
        loss_p = (loss/cost_p) * 100;                      
        printf("There has been a LOSS!! \nLoss Percentage(%) : %.4lf",loss_p);
  }

  else if (sell_p > cost_p) {                    //If the selling price is more than the cost price, then a PROFIT has occurred
        profit = sell_p - cost_p;
        profit_p = (profit/cost_p) * 100;
        printf("There has been a PROFIT!! \nProfit Percentage(%) : %.4lf",profit_p);
  }

  else {                                        //In a condition where Cost Price = Selling Price , there is no Profit or Loss
        printf("There has been no PROFIT or LOSS");
  }

  return 0;
}




          
        
