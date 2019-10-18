#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>


#define pi M_PI

int main()
{
  float *a;
  float *xg;
  float dx;

  int i, imax;
  
  /*Allocate memory*/
  printf("Enter imax:\n");
  scanf("%d", &imax);

  a = (float *)malloc( imax*sizeof(float) );
  xg = (float *)malloc( imax*sizeof(float) );

  dx = 1.0/(float)(imax-1);
  
  for(i=0; i<imax; ++i){

    xg[i] = i*dx;
    a[i] = sin(xg[i]*pi);
    
  }

  /*Write output to csv file in different folder*/
  FILE *fp;
  fp = fopen("./test/data.csv", "w+");
  fprintf(fp, "xgrid , ascalar\n");
  for(i=0; i<imax; ++i){
    fprintf(fp,"%f,%f\n", xg[i], a[i]);
  }
  //fclose(fp);
  
  /*For demonstration purpose only*/
  /*Read from file and print to screen*/

  //re-initiate a, xg
  for(i=0; i<imax; ++i){
    a[i] = 0.0;
    xg[i] = 0.0;
  }

  

  rewind(fp); //reset the file pointer back to 0

  

  rewind(fp);
  
  char *line = NULL;
  ssize_t read;
  size_t len = 0;

  /*for testing purpose only*/
  read = getline(&line, &len, fp);
  printf("Line length %zu\n", read);
  printf("%s\n", line);
  
  char *token = strtok(line,",");
  int columns = 0;
  while(token !=NULL){
    columns +=1;
    printf("%s\t",token);
    token = strtok(NULL,",");
  }
  printf("\n");

  printf("Database columns: %d\n", columns);

  /*
  rewind(fp);
  for(i=0; i<imax; ++i){
    read = getline(&line, &len, fp);
    printf("%s", line);
  }
  */
  printf("Printing out separated values\n"); 
  rewind(fp);
  read = getline(&line, &len, fp);
  i=0;
  do{
    read = getline(&line, &len, fp);
    token = strtok(line,",");
    a[i] = atof(token);
    while(token !=NULL){
      //printf("%s\n",token);
      xg[i] = atof(token);
      token = strtok(NULL,",");
    }
    i +=1;
    
  }while(read != -1);
printf("\n");

 printf("x values\n");
 for(i =0; i<imax; ++i){
   printf("a[%d] = %f\t xg[%d] = %f\n ",i,a[i], i, xg[i]);
 }
 
  /*
  char c1[30];
  rewind(fp);
  while(fgets(c1, 30, fp) !=NULL  ){
    printf("%s", c1);
  }
  */
    
  
  fclose(fp);
  
}
