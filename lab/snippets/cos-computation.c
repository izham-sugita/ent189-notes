#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
  float xd,x, term, sum;
  int n;

  printf("Enter the angle in degrees:\n");
  scanf("%f", &xd);

  x = (M_PI/180.0)*xd;

  term = 1.0;
  sum = 0.0;
  n =1;

  while(fabs(term) > 1.0e-5){

    sum = sum + term;
    term = ((-1)*x*x/((2*n-1)*(2*n)))*term;
    n +=1;
  }

  printf("cos(x) from computation: %f\n", sum);
  printf("cos(x) from library: %f\n", cos(x));
  
  
}
