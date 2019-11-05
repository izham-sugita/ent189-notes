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

  int c1;
  scanf("%d", &c1);
  if(c1 >5){
    printf("c1 > 5");
  }else if(c1<5){
      printf("c1<5");
    }
  
}
