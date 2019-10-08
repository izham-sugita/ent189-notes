#include<stdlib.h>
#include<stdio.h>
#include<math.h>

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

  //fp = fopen("./test/data.csv", "r");

  rewind(fp); //reset the file pointer back to 0

  /*
  char var1[10];
  char var2[10];
  char sep[1];
  fscanf(fp,"%s", var1);
  printf("%s\n", var1);
  */

  char *line = NULL;
  ssize_t read;
  size_t len = 0;

  read = getline(&line, &len, fp);
  printf("Line length %zu\n", read);
  printf("%s\n", line);
  
  fclose(fp);
  
}
