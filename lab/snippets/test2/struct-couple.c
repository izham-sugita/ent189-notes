#include<stdio.h>
#include<stdlib.h>

struct couple{
  char staff[10];
  char spouse[10];
};

int main()
{

  struct couple mystaff[3];

  for(int i=0; i<3; ++i){
    printf("Enter staff's name: ");
    fgets(mystaff[i].staff, sizeof(mystaff[i].staff), stdin);
    //printf("\n");
    //printf("Enter spouse's name: ");
    //fgets(mystaff[i].spouse, sizeof(mystaff[i].spouse), stdin);
  }


  printf("\nStaff\tSpouse\n");
  for(int i=0; i<3; ++i){
    //printf("%s %s\n", mystaff[i].staff, mystaff[i].spouse);
    printf("%c", mystaff[i].staff[0]);
    //    printf(" %c\n", mystaff[i].spouse[0]);
  }

  int ind = 0;
  if(mystaff[0].staff[ind] != '\0'){
    do{
      printf("%c", mystaff[0].staff[ind]);
      ++ind;

    }while(mystaff[0].staff[ind] != '\0');
  }

}
