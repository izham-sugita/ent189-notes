#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point{
  double x, y;
};

double area(struct point p[], int n){
  double sum=0.0;
  int i;
  double sum1 = 0.0;
  double sum2 = 0.0;
  for(i=0; i<3; ++i){
    sum1 += p[i].x *p[i+1].y;
    sum2 += p[i+1].x *p[i].y;
  }
  sum1 += p[3].x *p[0].y;
  sum2 += p[0].x*p[3].y;
  sum = 0.5*(sum1 - sum2);

  return sum;
}

int main()
{

  struct point p[4];

  p[0].x = 6.0; p[0].y = 4.0;
  p[1].x = 13.0; p[1].y = 8.0;
  p[2].x = 8.0; p[2].y = 16.0;
  p[3].x = 6.0; p[3].y = 12.0; 

  double polygon;

  polygon = area(p, 4);
  printf("Area = %.4f\n", polygon);
  
}
