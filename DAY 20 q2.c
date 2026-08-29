//Write a program to find the 1s complement of a binary number and print it

#include <stdio.h>
int main() {
  int binary,digit,temp;          //temp will store a copy of the binary number so that we can use it to multiply the place gradually by 10 so that it keeps moving forward 
  int place=1;                    //We have initialised place as 1 so that it can be increased in the form of 10th,100th,1000th etc places

  printf("Enter the Binary Number : ");
  scanf("%d",&binary);

  temp = binary;
  while (temp >= 10) {            //temp will be decreased through temp = temp / 10 eventually making it 0
        place = place * 10;
        temp = temp / 10;
  }
  while (place > 0) {             //place will hold the value in the squares of 10(10*10) depending on the total no of digits 
        digit = binary / place;   //digit will give us the value of all the digits one by one so that we can compliment them to 0 or 1

        if (digit == 0) {         //If the current digit will be 0, then 1 will be printed replacing it
             printf("1");
        }
        else {                    //If the current digit will be 1, then 0 will be printed replacing it
             printf("0");
        }

        binary = binary % place;      //The modulus of binary % place will give a new shorter binary number again and again
        place = place / 10;           //place will be divided by ten every time so that it keeps decreasing gradually and we get a shorter number
  }
  return 0;
}
                
  
