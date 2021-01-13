#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWA 3
#define COLA 3
#define ROWB 3
#define COLB 3
#define ROWC 3
#define COLC 3

int main()
{

float matrixA[ROWA][COLA];
float matrixB[ROWB][COLB];
float matrixC[ROWC][COLC];

for(int i=0; i<ROWC; ++i){
for(int j=0; j<COLC; ++j){
	matrixC[i][j] = 0.0;
	}
	}

srand(time(0));

//printf("%d\n", RAND_MAX);

for(int i=0; i<ROWA; ++i){
for(int j=0; j<COLA; ++j){
	matrixA[i][j] = rand()/(float)RAND_MAX;
	matrixB[i][j] = rand()/(float)RAND_MAX;
	}
	}

//print matrices
printf("Matrice A\n");
for(int i=0; i<ROWA; ++i){
for(int j=0; j<COLA; ++j){
	printf("%f  ", matrixA[i][j] );
	}
printf("\n");
	}
printf("\n");

printf("Matrice B\n");
for(int i=0; i<ROWA; ++i){
for(int j=0; j<COLA; ++j){
	printf("%f  ", matrixB[i][j] );
	}
printf("\n");
	}
printf("\n");


//add matrices A and B
for(int i=0; i<ROWA; ++i){
for(int j=0; j<COLA; ++j){
matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
}
}

printf("Matrice C\n");
for(int i=0; i<ROWA; ++i){
for(int j=0; j<COLA; ++j){
	printf("%f  ", matrixC[i][j] );
	}
printf("\n");
	}
printf("\n");








}
