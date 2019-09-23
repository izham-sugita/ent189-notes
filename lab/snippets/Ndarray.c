#include<stdlib.h>
#include<stdio.h>

int main()
{
  float **a;
  int i=0, imax=3;
  int j, jmax=3;
  
  a =(float **)malloc(imax*sizeof(float *));

  for(i=0; i<imax; ++i){
    a[i] = (float *)malloc(jmax*sizeof(float));
  }

  
  for(i=0; i<imax; ++i){
    for(j=0; j<jmax; ++j){
      a[i][j] = 0.0;
      
      (i == j )? (a[i][j]=1.0) : (a[i][j]=0.0) ;

      printf("a[%d][%d] = %f\n", i,j,a[i][j]);
    }
  }

  /*Free memory*/
  for(i=0; i<imax; ++i){
    free(a[i]);
  }
  free(a);

  
}
