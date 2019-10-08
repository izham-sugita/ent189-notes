#include<stdio.h>
#include<stdlib.h>

int main()
{

  float a[7] ={1.0, 3.5, 7.8, 15.0, 3.2, 8.4, 3.3};

  int i;

  float a1, a2;

  i =0;
  a1 = a[0];
  while(i<6){
    a2 = a[i+1];
    if(a1 > a2){
      a1 = a1;
    }
    else{
      a1 = a2;
    }
    i +=1;
  }

  printf("%f\n", a1);
}

int f0(int a)
{
  a = a+1;
}

int f1(int *a)
{
  *a = *a +1;
}
