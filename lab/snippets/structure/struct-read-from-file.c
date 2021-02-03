#include<stdlib.h>
#include<stdio.h>
#include<string.h> //strcpy
#include<ctype.h>

struct student{
  char Fname[20];
  char Sname[20];
  int matrix;
  float cgpa;
};


int main()
{

  FILE *fp;
  int msg =0;
  
  fp = fopen("studentdata.txt","r");
  int row =0;
  char buffer[100];

  //check for row in a file
  msg = fscanf(fp, " %[^\n]", buffer);
  while( msg != -1 ){
  row +=1;
  msg = fscanf(fp, " %[^\n]", buffer);
  //printf("%s\n", buffer);
  }

  printf("Row: %d\n", row);

  //VLA
  struct student classA[row];
  rewind(fp);

  int matrix;
  float cgpa;
  char fname[20], sname[20];
  for(int i=0; i<row; ++i){
    fscanf(fp, "%s %s %d %f", fname, sname, &matrix, &cgpa );
    //printf("%s %s %d %f\n", fname, sname, matrix, cgpa);
    strcpy(classA[i].Fname, fname);
    strcpy(classA[i].Sname, sname);
    classA[i].matrix = matrix;
    classA[i].cgpa = cgpa;
  }
  
  printf("\n");
  for(int i=0; i<row; ++i){
    printf( "%s %s %d %f\n", classA[i].Fname, classA[i].Sname,
	    classA[i].matrix, classA[i].cgpa);
  }

  rewind(fp);

  //using pointer
  struct student *classB;

  //assign size
  classB = (struct student *)malloc(row*sizeof(struct student) );

  for(int i=0; i<row; ++i){
    fscanf(fp, "%s %s %d %f", fname, sname, &matrix, &cgpa );
    strcpy(classB[i].Fname, fname);
    strcpy(classB[i].Sname, sname);
    classB[i].matrix = matrix;
    classB[i].cgpa = cgpa;
    
  }
  
  
  free(fp);
  free(classB);
    

}
