#include<stdlib.h>
#include<stdio.h>

int main()
{
  int a[10] = {1,2,3};
  int i;
  for(i=0; i<10; ++i){
    printf("%d\n", a[i]);
  }

  char name[5]={'a','b','c'};
  for(i=0; i<5; ++i){
    printf("%c ", name[i]);
  }

  int array2[]={1,2,3,4,5};

  int c1=6;
  //scanf("%d", &c1);
  if(c1 >5){
    printf("c1 > 5\n");
  }else if(c1<5){
      printf("c1<5\n");
    }

  int *array3;
  array3 = (int *)malloc(5*sizeof(int) );
  free(array3);

  printf("\n");
  int N = 3;
  int M = 3;

  int **array4;
  array4 = (int **)malloc(N*sizeof(int *) );
  for(int i=0; i<N; ++i){
    array4[i] = (int *)malloc( M*sizeof(int) );
  }
  for(int i=0; i<N; ++i){
    for(int j=0; j<M; ++j){
      array4[i][j] = i*M + j;
    }
  }

  for(int i=0; i<N; ++i){
    for(int j=0; j<M; ++j){
      printf("array4[%d][%d]=%d\n", i,j, array4[i][j] );
    }
  }
  
}
