#include<stdio.h>
#include<stdlib.h>

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
  return sum
}



void disp_driver(char name[20], int drv_ID,
		 float *round, char cat[20])
{
  float ave;
  ave = calc_time(round);

  printf("Driver Name: %s\n", name);
  printf("Driver's ID: %d\n", drv_ID);
  printf("Average time: %f\n", ave);
  
  if(ave <= 120.0){ cat ="Fast"; }
  if(ave > 120.0 && ave <=180.0){ cat ="Average"; }
  if(ave > 180.0){ cat ="Slow"; }

  printf("Driver's category: %s\n", cat);
  
}


int main()
{

  char name[20];
  char cat[20];
  int drv_ID;
  float ave_time;
  float Round[3];

  InputData(name, &drv_ID, Round);
  disp_driver(name, drv_ID, Round, cat);

  /*Prepare column heads*/
  FILE *fp;
  fp = fopen("drivers.txt", "w");
  fprintf(fp,"Driver Name\t Driver ID Round 1 Round 2 Round 3 Ave. Time   Cat\n");
  fclose(fp);

    
}
