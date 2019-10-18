#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()
{
  char str[] = "Test, volume, data";

  char *token = strtok(str, ",");

  while(token !=NULL){
    printf("%s\t", token);
    token = strtok(NULL, ",");
  }
  printf("\n");

}
