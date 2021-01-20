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

struct student classA[5];

char inputname[20];
int matnumber;

for(int i=0; i<5; ++i)
{
printf("Matrix: \n");
scanf("%d", &matnumber);
printf("Enter name:\n");
scanf(" %[^\n]", inputname);
strcpy(classA[i].name, inputname);
classA[i].matrix = matnumber;
}

printf("Student[0] matrix is %d\n", classA[0].matrix);
printf("Student[0] name is %s\n", classA[0].name);


}
