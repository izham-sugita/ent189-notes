#include<stdlib.h>
#include<stdio.h>

int foo(int a, int *b){

  a = a+1;
  *b = *b +1;

  printf("a in foo: %d\n", a);
  printf("b in foo: %d\n", *b);
  
}

int main()
{
  int *p, q;
  q = 10;
  p = &q;
  printf("Value of the pointer: %d\n", *p);
  printf("Address the pointer is pointing to: %p\n", &p);

  int a, b;

  a = 1;
  b = 1;
  
  foo(a, &b);

  printf("a after the function is invoked: %d\n", a);
  printf("b after the function is invoked: %d\n", b);
  
  
}
