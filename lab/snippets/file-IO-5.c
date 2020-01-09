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

  /*
  fp = fopen("st1.dat","w");

  if(fp == NULL){
    printf("Can't open file or file doesn't exist.\n");
    exit(0);
  }
  */

  
  FILE *frk08;
  frk08 = fopen("frk08.dat","w");
  
  /*Creating struct array*/
  struct Student rk08[3];
  for(int i=0; i<3; ++i){
    printf("Enter matrix number:\n");
    scanf("%d", &rk08[i].roll);
    printf("Enter name:\n");
    scanf("%s", rk08[i].name);
    printf("Enter marks\n");
    scanf("%f", &rk08[i].marks);
  }
  
  fwrite(&rk08, sizeof(rk08), 3, frk08 );
  fclose(frk08);

  /*
  ch = 'y';  
  do{

    printf("Enter roll: ");
    scanf("%d", &st1.roll);

    printf("Enter Name: ");
    scanf("%s", st1.name);

    printf("Enter marks: ");
    scanf("%f", &st1.marks);

    fwrite(&st1, sizeof(st1), 1, fp );

    printf("Continue? (y)es, (n)o:\n");
    //ch = getchar();
    scanf(" %c", &ch);
    
  }while(ch=='y' || ch=='Y');

  fclose(fp);

  */

  /*
  fp = fopen("st1.dat","r");
  if( fp==NULL ){
    printf("Can't open file or file doesn't exist.\n");
    exit(0);
  }
  */

  /*
  struct Student stread;

  printf("\n\tRoll\tName\tMarks\n");

  while(fread(&stread, sizeof(stread),1,fp ) > 0 )
    printf("\n\t%d\t%s\t%f", stread.roll, stread.name, stread.marks);

  printf("\n");
  
  fclose(fp);
  */

  /*Read frk08*/
  struct Student rk08_1[3];
  frk08 = fopen("frk08.dat","r");
  fread(&rk08_1, sizeof(rk08_1[0]), 3, frk08);

  printf("\n");
  for(int i=0; i<3; ++i){
  printf("\n\t%d\t%s\t%f", rk08_1[i].roll, rk08_1[i].name,
	   rk08_1[i].marks);
  }
  printf("\n");
  
}
