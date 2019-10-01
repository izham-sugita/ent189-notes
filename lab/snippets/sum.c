#include<stdio.h>
#include<stdlib.h>

int main()
{
  /*
  float sum=0;
  float var;

  int N, i;
  printf("Enter the number of numbers you want to add.\n");
  scanf("%d", &N);

  printf("Enter the values:\n");
  for(i=1; i<=N; ++i){
    scanf("%f", &var);
    sum = sum + var;
  }
  printf("The summation is %f\n", sum);
  */

  float sum10=0;
  float var10;
  int N, i;

  printf("Start taking input\n");
  
  for(i=1; i<=10; ++i){
    scanf("%f", &var10);
    if(var10 >10 && var10 <100){ ++sum10;}
  }
  printf("Total sum is %f\n", sum10);
  
}
