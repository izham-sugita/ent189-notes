#include<stdio.h>
#include<stdlib.h>
#include<string.h> //for strcpy()

//create a function prototype
float avepower(char *, int, float [3] );

void display_pump(char *, int,  float, char *, int *, int *, int *);


int main()
{
  char pname[10];
  char cat[10];
  
  int pcode = 0;
  int Lc =0, Mc = 0, Hc = 0;
  
  float tpower[3] = {0.0};
  float ave;

  //opening file
  FILE *fp;
  fp = fopen("waterpump.txt", "w+"); // "w+" mode 
  
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
  display_pump(pname,pcode,ave, cat, &Lc, &Mc, &Hc);
  
  fprintf(fp, "%s %d %f %f %f %f %s\n",
	  pname, pcode, tpower[0], tpower[1], tpower[2], ave, cat);
  
  printf("Continue? y/n \n");
  scanf(" %c", &ans);
  
  }

  int stat =1; //init positive number
  //reading file from top again
  rewind(fp);
      stat = fscanf(fp, "%s %d %f %f %f %f %s",
		    pname, &pcode, &tpower[0], &tpower[1], &tpower[2], &ave, cat );

      //EOF=-1, End-Of-File
   printf("Pump Name    Code    Test 1    Test 2   Test 3    Average    Category\n");
  while( stat != EOF ){
    printf("%s %d %f %f %f %f %s \n",
	   pname, pcode, tpower[0], tpower[1], tpower[2], ave, cat);
    stat = fscanf(fp, "%s %d %f %f %f %f %s",
	       pname, &pcode, &tpower[0], &tpower[1], &tpower[2], &ave, cat );
  }
  
  printf("Read status: %d\n", stat);

  printf("Low: %d\n", Lc);
  printf("Medium: %d\n", Mc);
  printf("High: %d\n", Hc);
  
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

void display_pump(char *pname, int pcode, float ave, char *cat,
		  int *Lc, int *Mc, int *Hc)
{
  if(ave < 2.0){
    strcpy(cat, "Low");
    *Lc +=1;
    
  }else if( ave>=2.0 && ave<=4.0){
    strcpy(cat, "Medium");
    *Mc +=1;
    
  }else{
    strcpy(cat, "High");
    *Hc +=1;
  };
  
  printf("Pump\tCode\tAve Power\tCategory\n");
  printf("%s\t%d\t\%f\t%s \n", pname, pcode, ave, cat);
  
}
