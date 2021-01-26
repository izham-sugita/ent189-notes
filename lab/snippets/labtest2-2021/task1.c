#include<stdio.h>
#include<stdlib.h>

//create a function prototype
float avepower(char *, int, float [3] );

int main()
{
  char pname[10];
  int pcode = 0;
  float tpower[3] = {0.0};
  float ave;
  char ans = 'y';
  while(ans == 'y'){
  printf("Enter pump's name: \n");
  //scanf(" %s", pname);
scanf("%s", pname);
  printf("Enter pump's code: \n");
  scanf("%d", &pcode);
  for(int i=0; i<3; ++i){
    printf("Enter Test %d power rating: \n", i+1);
    scanf("%f", &tpower[i] );
  }
  ave = avepower(pname, pcode, tpower);

  printf("Continue? y/n \n");
  scanf(" %c", &ans);
  
  }

}

float avepower(char *pname, int pcode, float tpower[3] )
{
  float ave=0.0;
  for(int i=0; i<3; ++i) ave +=tpower[i];
  ave = ave/3;
  printf("Pump\tCode\tAve Power\n");
  printf("%s\t%d\t\%f \n", pname, pcode, ave);

  return ave;
}
