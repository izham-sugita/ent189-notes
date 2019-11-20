#include <stdio.h>
#include <stdlib.h>

void inputdata(int *, float *, float *, int *);
void display(int, float, float, float *);
void classification(float , int *, int *, int *);

void classification2(float, int *, int *, int *,
                     int , int *, float *, int *, float *);

void minmax(int,float,int *,float *, int *,float *,int);

int main()
{

    int id;
    float force;
    float surface;
    float pressure;

int low, med, high;

 int idmin,idmax;
 float pmin, pmax;

    int counter = 0;

    printf("Lab Test 1D.\n");
/*
printf("Testing section.... \n");
    inputdata(&id, &force, &surface, &counter);
    display(id,force,surface, &pressure);
    classification(pressure, &low, &med, &high);
printf("Testing end .... \n");
*/

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
    inputdata(&id, &force, &surface, &counter);
    display(id,force,surface, &pressure);
    classification(pressure, &low, &med, &high);
    minmax(id, pressure, &idmin,&pmin,&idmax,&pmax,counter);


case 'n':
    break;

default:
    printf("Invalid input! \n");

    }


printf("Continue? (y)es/(n)o \n");
scanf(" %c", &ans);


}

printf("Number of low pressure sample: %d\n", low);
printf("Number of medium pressure sample: %d\n", med);
printf("Number of high pressure sample: %d\n", high);

 printf("\n");
 printf("Sample ID with the highest pressure : %d in %f Pa\n", idmax,pmax);
 printf("Sample ID with the lowest  pressure : %d in %f Pa\n", idmin,pmin);

    return 0;
}
