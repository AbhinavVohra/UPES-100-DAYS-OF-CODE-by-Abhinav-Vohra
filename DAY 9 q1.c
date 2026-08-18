//Write a program to find the roots of a quadratic eqaution and categorise them

#include <stdio.h>
#include <math.h>                 //We have include math header file so that we can use math related functions like sqrt(),pow() etc in our code

int main() {
  int a,b,c;               //We are accepting the coefficients as integer values
  double disc,root1,root2,realpart,imagepart;           //We are accepting the discriminant,roots and the real and imaginary parts as decimal values

  printf("Enter coefficients a,b and c:");
  scanf("%d,%d,%d",&a,&b,&c);

  if (a==0) {                                      //a cannot be zero in a quadratic equation
      printf("The coefficient a cannot be zero!\n");
  }

  disc = b ^ 2  -4 * a * c;            //Formula of Discriminant = b^2 - 4ac

  if (disc > 0) {                              //If the value of Discriminant is greater than zero,then the quadratic equation has realand distinct roots
       root1 = (-b + sqrt(disc))/(2 * a);
       root2 = (-b - sqrt(disc))/(2 * a);
       printf("Roots are real and distinct\n");
  }

  else if (disc == 0) {                   //If the value of Discriminant is equal to 0,then quadratic equation has real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %.2lf\n",root1);
  }

  else {                                          //The only case left is when the quadratic equation has imaginary and distinct roots
        realpart = -b / (2 * a);
        imagepart = sqrt(-disc) / (2 * a);

        printf("Roots are Imaginary and distinct\n");
        printf("Root 1 = %.2lf + %.2lf\n",realpart,imagepart);
        printf("Root 2 = %.2lf -%.2lf\n",realpart,imagepart);
  }

  return 0;
}


 
