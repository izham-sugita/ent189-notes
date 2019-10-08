#include<stdlib.h>
#include<stdio.h>

int f0(int);
int f1(int *);

int main()
{

  int a = 1;

  f0(a);
  printf("Value of a=%d after f0 call.\n", a);

  f1(&a);
  printf("Value of a=%d after f1 call.\n", a);
  
}

int f0(int a)
{
  a = a+1;
}

int f1(int *a)
{
  *a = *a + 1;
}
