#include<stdio.h>
#include<stdlib.h>
#include<math.h> //for sqrt function

int main()
{
  float side1, side2, side3, area, p;
  
  printf("Enter side 1:\n");
  scanf("%f", &side1);
  printf("Enter side 2:\n");
  scanf("%f", &side2);
  printf("Enter side 1:\n");
  scanf("%f", &side3);

  float eps = 1.0e-6; //0.000001
  p = 0.5*(side1 + side2 + side3);
  //check for exceptions
  if( (p-side1) < eps ){
    printf("side 1 is invalid\n");
    exit(0);
  }
  if( (p-side2) < eps ){
    printf("side 2 is invalid\n");
    exit(0);
  }
  if( (p-side3) < eps ){
    printf("side 3 is invalid\n");
    exit(0);
  }
  
  //Herons formula
  area = sqrt(p * (p-side1) *(p-side2) *(p-side3) );
  printf("Area of the triangle: %f\n", area);
  
}
