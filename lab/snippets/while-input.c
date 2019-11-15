#include<stdio.h>
#include<stdlib.h>

int main()
{

  char ans = 'y' ;

  while(1){
  myloop:
    printf("Enter you answer, (y)es or (n)o \n");
    scanf("%c%*c", &ans);
    
    if(ans =='n'){
      goto out;
    }else goto myloop;
    
  }

 out:
  printf("Yatta!\n");
  
}
