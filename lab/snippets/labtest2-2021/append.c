/*
This program demonstrate a simple use of malloc()
to create an appendable array for new data input.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

int *a, *b;
int inter;

int count=0;

//initiate size
a = (int *)malloc(sizeof(int));
b = (int *)malloc(sizeof(int));
//init value
a[0] = 0;
b[0] = 0;

//this condition will never be true
for(int id=0; id<0; ++id){printf("Test\n");}

char ans = 'y';
while( ans == 'y'){
	printf("Enter a value to be stored: \n");
	scanf("%d", &inter);
	printf("Continue? y/n \n");
	scanf(" %c", &ans);

	count +=1;
	free(b);
	//resize b
	b = (int *)malloc(count*sizeof(int));
	b[count-1] = inter; //last element
	for(int id=0; id<count-1; ++id){
	//reverse copy
	b[id] = a[id];  	
	}
	//free a
	free(a);
	//resize a
	a = (int *)malloc(count*sizeof(int));
	//copy b to a for previous value storage
	for(int id=0; id<count; ++id){
	a[id] = b[id];	
	}
	

	}

printf("%d\n", count);
for(int id=0; id<count; ++id){
	printf("a[%d] = %d , b[%d] = %d\n", id, a[id], id, b[id]);
	}

}
