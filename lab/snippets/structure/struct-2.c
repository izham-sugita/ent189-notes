/*How to use typedef*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct record{

char name[20];
float cgpa;
int matrix;

}student;

typedef union{
short num;
char jimat[2];
}savememory;

int main()
{
student classA;
struct record classB;

int N;
student *classC;
printf("Enter number of elements for classC:\n");
scanf("%d", &N);

classC = (student *)malloc(N*sizeof(student) );
float cgpa;
int matrix;
char name[20];

/*
for(int i=0; i<N; ++i){
	printf("Enter name: \n");
	scanf(" %[^\n]", name);
	printf("Enter cgpa: \n");
	scanf("%f", &cgpa);
	printf("Enter matrix: \n");
	scanf("%d", &matrix);
	strcpy(classC[i].name, name);
	classC[i].cgpa = cgpa;
	classC[i].matrix = matrix;
	}
*/

savememory test;
test.num = 2;

printf("%p, %p \n", &test.num, &test.jimat);

}
