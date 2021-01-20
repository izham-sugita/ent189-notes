#include<stdlib.h>
#include<stdio.h>
#include<string.h> //strcpy

struct student{
	char name[20];
	int matrix;
	float weight;
};


int main()
{
  //using VLS
  int N;
  printf("How many students?\n");
  scanf(" %d", &N);

struct student classA[N];

char inputname[20];
int matnumber;

for(int i=0; i<N; ++i)
{
printf("Matrix: \n");
scanf("%d", &matnumber);
printf("Enter name:\n");
scanf(" %[^\n]", inputname);
strcpy(classA[i].name, inputname);
classA[i].matrix = matnumber;
}

 for(int i=0; i<N; ++i){
 printf("Student %d details:\n", i);
 printf("Name: %s\n", classA[i].name);
 printf("Matrix: %d\n", classA[i].matrix);
 }


}
