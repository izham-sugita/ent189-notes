#include<stdio.h>
#include<stdlib.h>

#define N 10

int main()
{
  char letter;
  char *ptletter;
  
  letter = 'A';
  ptletter = &letter;
  
  printf("%d\n", ptletter);
  printf("%d\n", &letter);

  printf("%x\n", ptletter);
  printf("%x\n", &letter);

  float x, y;
  x = 10.0;
  y = 5.0;

  float *ptrx, *ptry;
  ptrx = &x;
  ptry = &y;

  float result=0.0;
  float *ptrresult;
  ptrresult = &result;

  printf("Address of result %x\n", ptrresult);
  printf("Address of x %x\n", ptrx);
  printf("Address of y %x\n", ptry);
  
  *ptrresult = *ptrx + *ptry;
  printf("The result=%f\n", result);

  printf("Address of result %x\n", ptrresult);
  printf("Address of x %x\n", ptrx);
  printf("Address of y %x\n", ptry);

  
  //char *myname; //un-initialize pointers; dangerous
                           // compileable, but will produce segmentation fault

  char myname[20];
  
  printf("Enter your name: \n");
  scanf("%[^\n]", myname);
  //scanf("%[^\n]%*c", myname);
  printf("Your name is %s\n", myname);
  
  float *array;  
  int imax;
  int i;
  printf("Enter maximum element numbers:\n");
  scanf("%d", &imax);
  printf("%d\n", imax);
  array = (float *)malloc( imax*sizeof(float) );
  for(i=0; i<imax; ++i){
    array[i] =1.0;
    printf("array[%d]=%f\n", i, array[i]);
  }
  
  float a0[N];
  

}
