#include<stdlib.h>
#include<stdio.h>

int main()
{
  FILE *fp; // file pointer

  fp = fopen("testwrite.txt", "w"); //open a file
  fprintf(fp, "This is a file\n"); //write to file
  fclose(fp); //close file

  char string[80];
  fp = fopen("testwrite.txt","r");
  fscanf(fp,"%[^\n]", string); //read the file
  printf("%s\n",string); //print the file
  fclose(fp);

  
  
  
}
