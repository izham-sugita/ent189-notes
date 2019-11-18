#include<stdio.h>
#include<stdlib.h>

struct Student
{

  int roll;
  char name[25];
  float marks;
  
};

int main()
{
  FILE *fp;
  char ch;
  struct Student st1;

  fp = fopen("st1.dat","w");

  if(fp == NULL){
    printf("Can't open file or file doesn't exist.\n");
    exit(0);
  }

  ch = 'y';
  
  do{

    printf("Enter roll: ");
    scanf("%d", &st1.roll);

    printf("Enter Name: ");
    scanf("%s", &st1.name);

    printf("Enter marks: ");
    scanf("%f", &st1.marks);

    fwrite(&st1, sizeof(st1), 1, fp );

    printf("Continue? (y)es, (n)o:\n");
    //ch = getchar();
    scanf(" %c", &ch);
    
  }while(ch=='y' || ch=='Y');

  fclose(fp);

  fp = fopen("st1.dat","r");
  if( fp==NULL ){
    printf("Can't open file or file doesn't exist.\n");
    exit(0);
  }

  struct Student stread;

  printf("\n\tRoll\tName\tMarks\n");

  while(fread(&stread, sizeof(stread),1,fp ) > 0 )
    printf("\n\t%d\t%s\t%f", stread.roll, stread.name, stread.marks);

  printf("\n");
  
  fclose(fp);
  
}
