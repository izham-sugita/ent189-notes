#include<stdio.h>
#include<stdlib.h>
#include<string.h> //for strcpy()

//create a function prototype
float avepower(char *, int, float [3] );

void display_pump(char *, int,  float, char *);


int main()
{
  char pname[10];
  char cat[10];
  
  int pcode = 0;
  float tpower[3] = {0.0};
  float ave;

  //opening file
  FILE *fp;
  fp = fopen("waterpump.txt", "w");
  
  char ans = 'y';
  while(ans == 'y'){
  printf("Enter pump's name: \n");
  scanf(" %s", pname);
  printf("Enter pump's code: \n");
  scanf("%d", &pcode);
  for(int i=0; i<3; ++i){
    printf("Enter Test %d power rating: \n", i+1);
    scanf("%f", &tpower[i] );
  }
  ave = avepower(pname, pcode, tpower);

  //classification
  display_pump(pname,pcode,ave, cat);
  fprintf(fp, "%s %d %f %f %f %f %s\n",
	  pname, pcode, tpower[0], tpower[1], tpower[2], ave, cat);
  
  printf("Continue? y/n \n");
  scanf(" %c", &ans);
  
  }

  fclose(fp);
  
}

float avepower(char *pname, int pcode, float tpower[3] )
{
  float ave=0.0;
  for(int i=0; i<3; ++i) ave +=tpower[i];
  ave = ave/3;
  
  //printf("Pump\tCode\tAve Power\n");
  //printf("%s\t%d\t\%f \n", pname, pcode, ave);

  return ave;
}

void display_pump(char *pname, int pcode, float ave, char *cat)
{
  if(ave < 2.0){
    strcpy(cat, "Low");
  }else if( ave==2.0 && ave<=4.0){
    strcpy(cat, "Medium");
  }else{
    strcpy(cat, "High");
  };
  
  printf("Pump\tCode\tAve Power\tCategory\n");
  printf("%s\t%d\t\%f\t%s \n", pname, pcode, ave, cat);
  
}
