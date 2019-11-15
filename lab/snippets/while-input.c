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

  ans ='y';

  while(ans !='n'){
    printf("Enter yes or no (y/n) \n");
    scanf(" %c", &ans); //add space to consume nextline
  }

  ans = 'y';
  while(ans !='n'){
    printf("Enter y or n?\n");
    scanf("\n%c", &ans);
  }

  //using getchar();
  ans ='y';
  while( ans != 'n'){
    printf("Enter a character");
    ans = getchar();
    getchar();
  }
  
}
