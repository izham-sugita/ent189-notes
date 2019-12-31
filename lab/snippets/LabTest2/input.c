#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InputData(char name[20], int *drv_ID,
	       float *Round)
{
  printf("Enter name:\n");
  scanf(" %[^\n]%*c", name);
  printf("Enter driver's ID:\n");
  scanf("%d", &(*drv_ID));
  for(int i=0; i<3; ++i){
    printf("Enter Round %d time:\n", i+1);
    scanf("%f", &Round[i]);
  }
  
}

float calc_time(float *round)
{
  size_t n = (sizeof(round) / sizeof(round[0])) + 1;

  float sum = 0.0;
  for(int i=0; i<n; ++i){
    sum += round[i];
  }
  sum = sum/n;
  return sum;
}

void disp_driver(char name[20], int drv_ID,
		 float *round, float *average, char *cat)
{

  float ave = calc_time(round);
  *average = ave;

  char *a =(char *)malloc(sizeof(char)*20 );
  
  printf("Driver Name: %s\n", name);
  printf("Driver's ID: %d\n", drv_ID);
  printf("Average time: %f\n", ave);
  
  if(ave <= 120.0){ strcpy(a, "Fast"); }
  if(ave > 120.0 && ave <=180.0){strcpy(a, "Average"); }
  if(ave > 180.0){ strcpy(a, "Slow"); }

  strcpy(cat, a);

  free(a);
  
  printf("Driver's category: %s\n", cat);
  
}


int main()
{

  char name[20];

  //  char *cat = (char *)malloc(sizeof(char) * 20) ;
  char cat[20];
  
  int drv_ID;
  float ave_time;
  float Round[3];

  /*Prepare column heads*/
  FILE *fp;
  fp = fopen("drivers.txt", "w");
  fprintf(fp,"Driver Name\t Driver ID Round 1 Round 2 Round 3 Ave. Time   Cat\n");
  fclose(fp);
  
  char ans ='y';
  fp = fopen("drivers.txt", "a+");
  
  do{
   InputData(name, &drv_ID, Round);
   disp_driver(name, drv_ID, Round, &ave_time, cat);

  fprintf(fp,"%s\t %d %f %f %f %f %s\n", name, drv_ID,
	  Round[0],Round[1],Round[2], ave_time, cat );
 
  printf("Continue? (y)es, (n)o \n");
  scanf(" %c", &ans); //don't forget the space before %c
  }while(ans !='n');

  fclose(fp);
    
}
