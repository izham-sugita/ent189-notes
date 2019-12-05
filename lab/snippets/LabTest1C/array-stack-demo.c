#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int N;

  printf("Enter maximum array size\n");
  scanf("%d", &N);

  /*Declare array*/

  float id[N];
  float A[N][N];
  float B[N][N];
  float C[N][N];

  
  srand(time(NULL));
  
  for(int i=0; i<N; ++i){
    id[i] = (float)rand()/(float)RAND_MAX;
  }

  /*Accessing array*/
  
  for(int i=0; i<N; ++i){
    printf("id[%d]=%f\n", i, id[i]);
  }
  printf("\n");
  

  for(int i=0; i<N; ++i){
    for(int j=0; j<N; ++j){
      //A[i][j]=(float)rand()/(float)RAND_MAX;
      B[i][j]=(float)rand()/(float)RAND_MAX;
      C[i][j] = 0.0;
    }
  }

  for(int i=0; i<N; ++i){
    for(int j=0; j<N; ++j){
      if(i==j){A[i][j] = 1.0;}
    }
  }


  /*Matrix multiplication*/
  int i,j,k;
  float sum;

  /*
  for(i=0; i<N; ++i){
    for(j=0; j<N; ++j){
      sum = 0.0;
      for(k=0; k<N; ++k){
	sum += A[i][k]*B[k][j];
      }
      C[i][j] = sum;
    }
  }
  */

  for(k=0; k<N; ++k){
    sum =0.0;
    for(i=0; i<N; ++i){
      for(j=0; j<N; ++j){
	C[i][j] +=A[i][k]*B[k][j];
      }
    }

  }

  /*
   for(int i=0; i<N; ++i){
     for(int j=0; j<N; ++j){
        printf("%f  ", C[i][j]);
    }
     printf("\n");
  }

   printf("\n");

    for(int i=0; i<N; ++i){

     for(int j=0; j<N; ++j){
        printf("%f  ", B[i][j]);
    }
     printf("\n");
  }

    printf("\n");
    
  */
  
   return 0;
   
}
