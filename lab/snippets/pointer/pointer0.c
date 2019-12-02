#include<stdio.h>
#include<stdlib.h>

int f1(int a, int *b);
int *pf1(int *something(int a, int *b) );

int main()
{
  int a = 2;
  int b = 2;

  printf("Address for a: %x\n", &a);
  printf("Address for b: %x\n", &b);

  int c;
  c = f1(a, &b);
  printf("Value of c = %d\n", c);
  printf("New value of b = %d\n", b);

  
  
}

int f1(int a, int *b)
{
  int *d;
  d = &a;

  *b = a + a;

  return a;
}

