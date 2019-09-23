#include<stdlib.h>
#include<stdio.h>

int main()
{

  int i=7;
  float f = 5.5;

  printf("%d\n", f>5 );
  printf("%d\n", !(f>5) );
  printf("%d\n", i<=3 );
  printf("%d\n", !(i<=3) );
  printf("%d\n", i > f+1 );
  printf("%d\n", !(i>f+1) );

  printf("Enter a selection, 1-hot 2-cold\n");
  scanf("%d", &i);

  /*
  if(i == 1) printf("Its hot!\n");
  if(i == 2) printf("Its cold\n");
  */
  
  if(i==1){
    printf("Its hot!\n");
  }else{
    printf("Nothing to do\n");
  }
  
}
