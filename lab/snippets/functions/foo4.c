#include<stdio.h>
#include<stdlib.h>

//function prototypes
int f1();
void f2();
int f3(int a);
int f4(int *b); //asterisk for pointer

int main()
{

  int x=4;
  
  f1();
  f2();
  f3(x); //call by value
  printf("x = %d\n", x);

  f4(&x); //call by reference
  printf("value of x after calling f4 is %d\n", x);
  
}

//function definitions
int f1()
{
  printf("Hello! I am f1!\n");
  return 0;
}

void f2()
{

  return;
}

int f3(int a)
{

  a = a +2;
  printf("a = %d\n", a);
}

int f4(int *b)
{

  (*b) = (*b) + 2;
}
