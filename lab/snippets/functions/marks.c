#include<stdio.h>

void read_marks(float*, float*);
float calc_avg(float,float);

int main()
{
  float mark1, mark2, ave;

  read_marks(&mark1, &mark2);
  printf("%f %f\n", mark1, mark2);
  
}

void read_marks(float *a, float *b)
{
  printf("Enter two marks:\n");
  scanf("%f %f", a, b);
  
}
