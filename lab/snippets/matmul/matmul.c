#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define M 3
#define N 3

int main()
{

srand(time(0));

float matrixA[M][N];
float matrixB[N][M];
float matrixC[M][M];

printf("Matrix A\n");
for(int i=0; i<M; ++i){
for(int j=0; j<N; ++j){
	matrixA[i][j] = rand() /(float)RAND_MAX;
printf("%f  ", matrixA[i][j]);
//	matrixA[i][j] = 0.0;
//	if(i==j){
//		matrixA[i][j] = 1.0;
//		}
	}
printf("\n");
	}

for(int i=0; i<M; ++i){
for(int j=0; j<M; ++j){
	matrixC[i][j] = 0.0;
	}
	}

//printf("%d\n", RAND_MAX);
printf("Matrix B\n");
float sum;
for(int i=0; i<N; ++i){
for(int j=0; j<M; ++j){
	matrixB[i][j] = rand()/(float)RAND_MAX;
	printf("%f  ", matrixB[i][j]);
	}
printf("\n");
	}


for(int i=0; i<M; ++i){
for(int j=0; j<M; ++j){

sum = 0.0;
for(int k=0; k<N; ++k){
	sum +=matrixA[i][k]*matrixB[k][j];
	}
matrixC[i][j] = sum;
	}
	}

printf("Solutions:\n");
for(int i=0; i<M; ++i){
for(int j=0; j<M; ++j){
	printf("%f  ", matrixC[i][j]);
	}
printf("\n");
	}

}
