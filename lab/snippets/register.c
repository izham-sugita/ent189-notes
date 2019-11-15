#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  register float a[4];
  float b[4];

  /*test loop*/
  clock_t start, end;
  double cpu_time;
  
  start = clock();

  for(int iter=0; iter<=100000; ++iter){
  
    //  a[i] =1.0; /*This operation is not allowed because each address is required*/
    a[0] = 1.0;
    a[1] = 1.0;
    a[2] = 1.0;
    a[3] = 1.0;
    
  }
  end = clock();
  cpu_time = ( (double)(end-start)  ) / CLOCKS_PER_SEC;

  printf("Register loop: %f seconds\n", cpu_time);

  start = clock();
  
  for(int iter=0; iter<=100000; ++iter){
    b[0] = 1.0;
    b[1] = 1.0;
    b[2] = 1.0;
    b[3] = 1.0;
  }

    end = clock();
    cpu_time = ( (double)(end-start)  ) / CLOCKS_PER_SEC;
    printf("Non-register loop: %f seconds\n", cpu_time);
      
}
