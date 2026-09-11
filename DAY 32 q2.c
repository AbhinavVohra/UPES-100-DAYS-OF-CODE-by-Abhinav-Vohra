//Write a program to find that digit which occurs the most in an integer number

#include <stdio.h>

int main() {
    char str[100];             //The array is declared as a char data type and the  integer number can have any size between 1 to 100
    int freq[10] = {0};        //A second array freq of int data type is created to 
    int i = 0;
    int maxFreq = 0;           //At first , we set the max frequency at 0
    int bestDigit = 0;
  
    printf("Enter the integer : ");
    scanf("%s", str);

    while (str[i] != '\0') {      //Checking the str for the occurence of digits
        int d = str[i] - '0';
        freq[d]++;             //Adding 1 to the values in frequency
        i++;
    }

    for (i = 0; i < 10; i++) {    
        if (freq[i] > maxFreq) {          //If the value of frequency is greater than 0 , then it will be stored in maxFreq
            maxFreq = freq[i];
            bestDigit = i;                //At the end of every iteration , bestDigit will contain the most occured no till that point
        }
    }

    printf("Most frequently occured  digit: %d\n", bestDigit);

    return 0;
}

