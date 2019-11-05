#include<stdlib.h>
#include<stdio.h>

#define something 10
#define pi 3.1416

int f0(int);
int f1(int *);
int f2(int *a);

int dummy=10;

int main()
{

printf("dummy=%d\n",dummy);
dummy = 1;
printf("dummy changed = %d\n", dummy);

  int a = 1;

  f0(a);
  printf("Value of a=%d after f0 call.\n", a);

  a = 1; //re-initiate
  f1(&a);
  printf("Value of a=%d after f1 call.\n", a);

  a = 1; //re-initiate
  f2(&a);
  printf("Value of a=%d after f2 call.\n", a);
  
}

int f0(int a)
{
printf("dummy=%d\n",dummy);

  a = a+1;
}

int f1(int *a)
{
printf("dummy=%d\n",dummy);

  *a = *a + 1;
}

int f2(int *a)
{
printf("dummy=%d\n",dummy);
 
 int temp = *a;
  temp = temp + 1;
  *a = temp;
}
