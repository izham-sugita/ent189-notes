#include<stdlib.h>
#include<stdio.h>

int main()
{
  float x, y, z;
  printf("Enter 3 numbers:\n");
  scanf("%f %f %f", &x, &y, &z);

  if(x>y && x>z){

    printf("The largest number: %f\n", x);
    
  }else if(y>x && y>z){

    printf("The largest number: %f\n", y);
    
  }else{

    printf("The largest number: %f\n", z);
    
  }
  
}
