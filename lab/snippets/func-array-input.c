#include<stdio.h>
#include<stdlib.h>

int vecadd(int *a, int *b, int N);

int main()
{

  int *vec1;
  int *vec2;

  int N = 10;

  vec1 = (int *)malloc(N*sizeof(int) );
  vec2 = (int *)malloc(N*sizeof(int) );

  for(int i=0; i<N; ++i){
    vec1[i] = 1;
    vec2[i] = 2;
  }

  int check;
  check = vecadd(vec1,vec2,N);

  printf("Function return value %d\n", check);
  
  for(int i=0; i<10; ++i){
    printf("vec2[%d]=%d, vec1[%d]=%d\n", i, vec2[i], i, vec1[i]);
  }

  int a = 1;
  int b = 2;
  vecadd(&a,&b,1);
  printf("a=%d, b=%d\n", a,b);
  
}

int vecadd(int *a, int *b, int N)
{
  for(int i=0; i<N; ++i){
  b[i] = a[i] + b[i];
  }

  for(int i=0; i<N; ++i){
    a[i] =2;
  }

  return 0;
}
