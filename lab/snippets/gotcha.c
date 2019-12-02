#include<stdlib.h>
#include<stdio.h>

int main()
{

  char ans = 'y';
  do{
    printf("Continue? (y)es / (n)o \n");
    scanf("%c", &ans);
    getchar();

  }while(ans !='n');

  int x[] = {1,2,4,4,3,6,2,5};
  int y[] = {10,12,15,4,10,13,13,18};
  
  int a = x[0];
  printf("%d\n", a);
  for(int i=1; i<8; ++i){
    if( a > x[i] ){
      a = x[i];
    }else
      {
	a = a;
      }
  }

  printf("%d\n", a);

  for(int i=0; i<8; ++i){
    a = y[i];
    for(int j =0; j<8; ++j){
      if(a == x[j]){
	printf("y[%d]=x[%d], the value is %d\n", i, j, y[i]);
      }
    }
  }
  
}
