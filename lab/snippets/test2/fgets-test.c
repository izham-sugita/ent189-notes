#include<stdlib.h>
#include<stdio.h>

int main()
{
  char name[30];
  printf("Enter name: ");
  fgets(name, sizeof(name), stdin);

  printf("\n");
  puts(name);
  
}
