#include<stdlib.h>
#include<stdio.h>
#include<string.h>


void assign(char *name){
  strcpy(name, "Testing");
}

int main()
{
  char test[20];

  assign(test);

  printf("%s\n", test);

}
