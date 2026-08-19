//Write a program to display the day of the week based on the number entered(1 to 7) using switch case

#include <stdio.h>
int main () {
  int n;
  printf("Enter a number from 1 to 7 :");     //The numbers from 1 to 7 represent the 7 days of the week
  scanf("%d",&n);

  switch (n) {    
        case 1 :                         //If the no entered is 1
             printf("The day is Sunday");
             break;
        case 2 :                         //If the no entered is 2
             printf("The day is Monday");
             break;
        case 3 :                         //If the no entered is 3 
            printf("The day is Tuesday");
            break;
        case 4 :                            //If the no entered is 4
            printf("The day is Wednesday");
            break;
        case 5 :                           //If the no entered is 5
            printf("The day is Thursday");
            break;
        case 6 :                           //If the no entered is 6
            printf("The day is Friday");
            break;
        case 7 :                          //If the no entered is 7
            printf("The day is Saturday");
            break;
        default :                            //This section executes if the number entered matches none of the above
            printf("The number entered is invalid !!");
  }
  return 0;
}









         
