#include<stdlib.h>
#include<stdio.h>


void swap(int **a, int **b);

int main()
{
int x[5] = {50,60,70,80,90};

for(int i=0; i<5; ++i){
	printf("Index i = %d, address = %p, value = %d\n", i, &x[i], x[i]);
	}

printf("\n");

for(int i=0; i<5; ++i){
	printf("Index i = %d, address = %p, value = %d\n", i, (x+i), *(x+i) );
	}

int *p1;
p1 = (int *)malloc(5*sizeof(int));
int *p2;
p2 = (int *)malloc(5*sizeof(int));

for(int i=0; i<5; ++i){
	p1[i] = 1;
	p2[i] = 0;
	}

for(int i=0; i<5; ++i){
	printf("p1[%d] = %d, p2[%d] = %d\n", i, p1[i], i, p2[i]);
}

//swap p1 -> p2 using pointer
swap(&p1, &p2);

for(int i=0; i<5; ++i){
	printf("p1[%d] = %d, p2[%d] = %d\n", i, p1[i], i, p2[i]);
}

printf("OK\n");

int ap1[5] = {1,1,1,1,1};
int ap2[5] = {0};

for(int i=0; i<5; ++i){
printf("ap1[%d] = %d, ap2[%d] = %d\n", i, ap1[i], i, ap2[i]);
	}


//swap by copy
int temp;
for(int i=0; i<5; ++i){
	temp = ap1[i];
	ap1[i] = ap2[i]; //copying the value of the elements
	ap2[i] = temp;
	}

for(int i=0; i<5; ++i){
printf("ap1[%d] = %d, ap2[%d] = %d\n", i, ap1[i], i, ap2[i]);
	}


}

void swap(int **a, int **b)
{
  int *temp = *a;
  *a = *b;
  *b = temp;
}


