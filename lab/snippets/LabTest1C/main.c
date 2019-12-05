#include <stdio.h>
#include <stdlib.h>

void inputdata1C(int *, float *, float *, int *);
void display1C(int, float, float, float *);

void classification1C(float , int *, int *, int *);

void minmax(int,float,int *,float *, int *,float *,int);

int main()
{

    int vin;
    float distance;
    float timed;
    float aveSpeed;

int low, med, high;

 int idmin,idmax;
 float pmin, pmax;

    int counter = 0;

    printf("Lab Test 1C.\n");

/*Re-initiate counters*/
low = 0;
med = 0;
high = 0;
counter = 0;

float prev_low_pressure;
int prev_low_tag;

float prev_high_pressure;
int prev_high_tag;

char ans ='y';
while(ans !='n'){

switch(ans){

case 'y':
    inputdata1C(&vin, &distance, &timed, &counter);
    display1C(vin,distance,timed, &aveSpeed);
          classification1C(aveSpeed, &low, &med, &high);

    minmax(vin, aveSpeed, &idmin,&pmin,&idmax,&pmax,counter);


case 'n':
    break;

default:
    printf("Invalid input! \n");

    }


printf("Continue? (y)es/(n)o \n");
scanf(" %c", &ans);


}

printf("Number of slow speed sample: %d\n", low);
printf("Number of normal speed sample: %d\n", med);
printf("Number of high speed sample: %d\n", high);

 printf("\n");
 printf("Sample vehicle ID with the highest speed : %d in %f km/h \n", idmax,pmax);
 printf("Sample vehicle ID with the lowest  speed : %d in %f km/h \n", idmin,pmin);

    return 0;
}
