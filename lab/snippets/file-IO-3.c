#include<stdio.h>

int main()
{
  FILE *fp;

  int account;
  char name[30];
  float balance;

  if( (fp = fopen("clients.txt","w") ) == NULL ){
    printf("File can't be opened");
  }else{

    printf("Enter account, name and balance\n");
    scanf("%d%s%f", &account, name, &balance);
    
  }
  fprintf(fp, "%d\t %s\t %f\n", account, name, balance);


  fclose(fp);
  
}
