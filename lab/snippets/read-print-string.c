#include<stdio.h>
#include<stdlib.h>

int main()
{

  char *st0;
  st0 = "Hello, World!";

  printf("%s\n", st0);

  /*
  char st1[]="12345";
  scanf("%s", st1);
  */

  /*The need to set a max limit is one of the reason why C++ is better*/
  char st2[100];
  fgets(st2, 100, stdin);
  printf("%s", st2);

  st0 = st2;
  printf("%s\n", st0);
  
  
}
