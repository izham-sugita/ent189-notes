#include<stdio.h>
#include<stdlib.h>

int main()
{
  int stat;
  FILE *fp;

  char pname[10];
  char cat[10];
  float tp[3];
  float ave;
  int code;
  
  fp = fopen("test.txt","r+");
  stat = 1;
      stat = fscanf(fp, "%s %d %f %f %f %f %s",
		    pname, &code, &tp[0], &tp[1], &tp[2], &ave, cat);
  while(stat != -1){
    printf("%s %d %f %f %f %f %s\n", pname, code, tp[0], tp[1], tp[2], ave, cat);
    stat = fscanf(fp, "%s %d %f %f %f %f %s",
		  pname, &code, &tp[0], &tp[1], &tp[2], &ave, cat);
  }
  
}
