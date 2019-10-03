#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
  /*Code specifier Lg, e*/
  
  printf("Max for long double: %Lg\n", LDBL_MAX);
  printf("Min for long double: %Lg\n", LDBL_MIN);

  printf("Min for long double: %e\n", DBL_MIN);
  printf("Max for long double: %e\n", DBL_MAX);

}
