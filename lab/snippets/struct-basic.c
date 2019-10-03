#include<stdio.h>
#include<stdlib.h>

struct Student{

  char *name;
  int matrix;
  
};

int main()
{

  struct Student unimap;

  char *stname;
  char *str0;

  stname = "Muhammad Ali";

  //printf("%s\n", stname);

  unimap.name = stname;
  unimap.matrix = 161110645;

  str0 = unimap.name;
  int number = unimap.matrix;

  printf("%s\n", str0);
  printf("%d\n", number);

  char *str1;
  
  printf("Input a name:\n");
  gets(str1);

  printf("%s\n", str1);

  /*
  unimap.name = str1;
  str0 = unimap.name;
  printf("%s\n", str0);
  */
  
}
