#include<stdio.h>
#include<stdlib.h>

int main(int argv, char **argc)
{
  int imax;
  
  if(argv <=1){
    printf("Enter input for maximum iteration\n");
    return -1;
    //exit(-1);
  }

  imax = atoi(argc[1]);
  
  int i=1;

  do{

    printf("Counting %d\n",i);

    //incremental part
    i +=1;
    
  }while(i<imax);

  printf("\n");
  //for loop
  //  for(i=1; i<imax; ++i){
    for(i=imax; i>0; --i){
    printf("Counting %d\n", i);
  }

  printf("\n");
  i=1;
  while(i<imax){
    printf("Counting %d\n", i);
    i +=1;
  }
  
}
