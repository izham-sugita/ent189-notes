#include<stdio.h>
#include<stdlib.h>

int main(int argv, char **argc)
{
  if(argv <= 1){
    printf("No input\n");
    return -1;
  }
  //check input
  char *st1;
  st1 = argc[1];

  printf("%s\n", st1);
  printf("%c\n", st1[0]);

  
  unsigned int i;
    i=0;
    do
    {
        printf("%d %x \n",i, i);
        i++;
    }
    while(i<=127);
  
  
  
}
