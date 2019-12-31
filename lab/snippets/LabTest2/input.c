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
  
  //printf("Driver's category: %s\n", cat);
  
}

struct Driver{
  char name[20];
  int id;
  float roundtime[3];
  float average;
  char speed[20];
};

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
  if( fp = fopen("drivers.txt", "r")){

    fclose(fp);
    fp = fopen("drivers.txt","a+");

  }else{

    fp = fopen("drivers.txt", "a+");
    fprintf(fp,"Driver Name\tDriver ID\tRound1\tRound2\tRound3\tAve\tCat\n");
 
  }

  char ans ='y';
  
  do{
   InputData(name, &drv_ID, Round);
   disp_driver(name, drv_ID, Round, &ave_time, cat);

  fprintf(fp,"%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%s\n", name, drv_ID,
	  Round[0],Round[1],Round[2], ave_time, cat );
 
  printf("Continue? (y)es, (n)o \n");
  scanf(" %c", &ans); //don't forget the space before %c
  }while(ans !='n');

  fclose(fp);

  char buff[7][40];
  float dummy;
  
  /*Reopening file*/
  fp = fopen("drivers.txt","r");
  rewind(fp);
  fscanf(fp,"%[^\t]%*c %[^\t]%*c %s %s %s %s %s",
	 buff[0],buff[1],buff[2],buff[3], buff[4],
	 buff[5],buff[6]);

  /*
  for(int i=0; i<7; ++i){
    printf("%s ", buff[i]);
  }
  printf("\n");
  */
  printf("\n");

  int fastdriver,slowdriver,averagedriver;
  fastdriver=0;
  slowdriver=0;
  averagedriver=0;

  char fast[20]="Fast";
  char slow[20]="Slow";
  char averagespeed[20]="Average";
  
  //while(!feof(fp)){
  while(1){

    fscanf(fp,"%s %d %f %f %f %f %s", buff[0], &drv_ID, &dummy,
	 &dummy, &dummy, &dummy, buff[1]);
    if(strcmp(buff[1],fast)==0) fastdriver +=1;
    if(strcmp(buff[1],slow)==0) slowdriver +=1;
    if(strcmp(buff[1],averagespeed)==0) averagedriver +=1;
    if(feof(fp)) break;
    
    printf("%s %d %f %f %f %f %s\n", buff[0],
	 drv_ID, dummy,dummy,dummy,dummy, buff[1]);
  }

  printf("Fast drivers : %d\n", fastdriver);
  printf("Average drivers : %d\n", averagedriver);
  printf("Slow drivers : %d\n", slowdriver);
  
  /*
  fscanf(fp,"%s",name);
  fscanf(fp,"%d",&drv_ID);
  fscanf(fp,"%f",&dummy);
  fscanf(fp,"%f",&dummy);
  fscanf(fp,"%f",&dummy);
  fscanf(fp,"%f",&dummy);
  fscanf(fp,"%s",cat);
  */
  
  
  //printf("%s\n", cat);
  
  fclose(fp);
    
}
