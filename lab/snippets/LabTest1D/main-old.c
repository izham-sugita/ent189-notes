#include <stdio.h>
#include <stdlib.h>

void inputdata(int *, float *, float *, int *);
void display(int, float, float, float *);
void classification(float , int *, int *, int *);

void classification2(float, int *, int *, int *,
                     int , int *, float *, int *, float *);

int main()
{

    int id;
    float force;
    float surface;
    float pressure;

int low, med, high;
int idlow, idhigh;
float pselectlow;
float pselecthigh;
int taglow;
int taghigh;

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
    //classification(pressure, &low, &med, &high);
    classification2(pressure, &low, &med, &high,
                     id, &taglow, &pselectlow, &taghigh, &pselecthigh);

    //switching for high-low
    printf("Current pressure : %f\n", pressure);
    printf("Current tag : %d\n", id);
    if(counter == 1 ){
        prev_low_pressure = pselectlow;
        prev_low_tag = taglow;

        prev_high_pressure = pselectlow;
        prev_high_tag = taglow;

        printf("Current lowest pressure : %f\n", prev_low_pressure);
        printf("Current lowest tag : %d\n", prev_low_tag);
        printf("\n");

        printf("Current highest pressure : %f\n", prev_high_pressure);
        printf("Current highest tag : %d\n", prev_high_tag);

    }else
    {
        if(pselectlow <=prev_low_pressure){
            prev_low_pressure = pselectlow;
            prev_low_tag = taglow;
        }
            printf("Current lowest pressure : %f\n", prev_low_pressure);
            printf("Current lowest tag : %d\n", prev_low_tag);

        if(pselecthigh >= prev_high_pressure){
            prev_high_pressure = pselecthigh;
            prev_high_tag = taghigh;
        }
            printf("Current highest pressure : %f\n", prev_high_pressure);
            printf("Current highest tag : %d\n", prev_high_tag);

    }


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

    return 0;
}
