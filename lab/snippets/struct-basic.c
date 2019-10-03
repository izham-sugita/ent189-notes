#include<stdio.h>
#include<stdlib.h>

#define name_max_limit 100

struct Student{

  char *name;
  char stdname[name_max_limit];
  int matrix;
  
};

int main()
{

  struct Student unimap;

  char name[name_max_limit];
  
  printf("Enter a student name:\n");
  fgets(name,name_max_limit,stdin);
  printf("%s\n", name);

  unimap.name = name;

  char *newname;

  newname = unimap.name;

  printf("%s\n", newname);

  int stdmax;
  int matrix_number;
  
  printf("Create a student list\n");
  printf("Enter number of students:\n");
  scanf("%d", &stdmax);

  struct Student *stdlist;
  stdlist = (struct Student *)malloc(stdmax*sizeof(struct Student));

  int i=0;
  while(i<stdmax){
    printf("Enter student name:\n");
    scanf("%s", &stdlist[i].stdname);
    printf("Enter matrix number:\n");
    scanf("%d", &stdlist[i].matrix);
    i +=1;
  }

  for(i=0; i<stdmax; ++i){
    newname = stdlist[i].stdname;
    matrix_number = stdlist[i].matrix;
    printf("%s\t %d\n", newname, matrix_number);
  }
  
}
