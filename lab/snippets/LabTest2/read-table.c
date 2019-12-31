#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  FILE *fp;
  fp = fopen("data.txt","w");
  fprintf(fp,"Student Name\tMatrix\tMarks\n");
  fclose(fp);

  char buff[3][20];
  //open to read
  fp = fopen("data.txt","r");
  //fscanf(fp,"%s %s %s", buff,buff,buff);
  fscanf(fp,"%[^\t]%*c %s %s", buff[0],buff[1],buff[2]);
  printf("%s\n", buff[0]);
  fclose(fp);

  printf("Enter your name:\n");
  scanf(" %[^\n]%*c", buff[0]);
  printf("%s\n", buff[0]);
  
}
