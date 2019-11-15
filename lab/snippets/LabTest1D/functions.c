#include<stdlib.h>
#include<stdio.h>


void display(int id, float force, float surface, float *pressure)
{
    *pressure = force/surface;

    printf("Material's ID: %d\n", id);
    printf("Acting force: %f\n", force);
    printf("Surface area: %f\n", surface);
    printf("Pressure : %f\n", *pressure);

}

void inputdata(int *id, float *force, float *surface, int *counter)
{

printf("Enter material's ID: \n");
scanf(" %d", id);

printf("Acting force: \n");
scanf("%f", force);

printf("Surface area: \n");
scanf("%f", surface);

*counter +=1;
printf("Input counter: %d\n", *counter);
}

void classification(float pressure, int *low, int *med, int *high)
{

if(pressure < 7.5){
    printf("Low\n");
    *low +=1;

}else if(pressure >= 7.5 && pressure <=10.0){
    printf("Medium \n");
    *med +=1;

}else if(pressure>10.0){
    printf("High!\n");
    *high +=1;

}else{
    printf("Invalid input!\n");
}

}

void classification2(float pressure, int *low, int *med, int *high,
                     int id, int *tag, float *pselect, int *taghigh, float *pselecthigh)
{


if(pressure < 7.5){
    printf("Low\n");
    *low +=1;
    *tag = id;
    *pselect = pressure;

}else if(pressure >= 7.5 && pressure <=10.0){
    printf("Medium \n");
    *med +=1;

}else if(pressure>10.0){
    printf("High!\n");
    *high +=1;
    *taghigh = id;
    *pselecthigh = pressure;

}else{
    printf("Invalid input!\n");
}

}


