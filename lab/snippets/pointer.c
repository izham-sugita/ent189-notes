#include<stdlib.h>
#include<stdio.h>

int main()
{
  int *p, q;
  q = 10;
  p = &q;
  printf("Value of the pointer: %d\n", *p);
  printf("Address the pointer is pointing to: %p\n", &p);
}
