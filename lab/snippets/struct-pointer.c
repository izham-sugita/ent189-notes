#include<stdlib.h>
#include<stdio.h>

struct student{
  int matrix;
  char name[50];
  int marks;
};

int main()
{

  int Num = 8;
  struct student *classA;

  classA = (struct student *)malloc(Num*sizeof(struct student) );

  /*Accessing student structure*/
  for(int i=0; i<Num; ++i){
    classA[i].matrix=i;
  }

  struct student *classB;
  classB = (struct student *)malloc(sizeof(struct student) );

  classB->matrix=189;
  
}
