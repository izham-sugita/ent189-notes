#include<stdio.h>
#include<stdlib.h>

int main()
{

  int i, imax =100;
  i=1;

  
  for(i=1; i<imax; ++i){
    //printf("%d\n", (i%10 ==0) ? i : 0 );
    (i%10 ==0) ? printf("%d\n",i) : printf(".");
  }
  printf("\n");
  

  // ternary operator ?:
  // (condition) ? value_if_true : value_if_false
  //printf("%d\n", (i==1) ? imax : 0);
  
}
