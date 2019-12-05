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

void display1C(int vin, float distance, float timed, float *aveSpeed)
{
    *aveSpeed = distance/timed;

    printf("Vehicle ID: %d\n", vin);
    printf("Covered distance: %f\n", distance);
    printf("Elapsed time: %f\n", timed);
    printf("Average speed : %f\n", *aveSpeed);

}

void inputdata1C(int *vin, float *distance, float *timed, int *counter)
{

printf("Vehicle ID: \n");
scanf(" %d", vin);

printf("Covered distance: \n");
scanf("%f", distance);

printf("Elapsed time: \n");
scanf("%f", timed);

*counter +=1;
printf("Input counter: %d\n", *counter);
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

void classification1C(float aveSpeed, int *low, int *med, int *high)
{

if(aveSpeed < 70.0){
    printf("Slow\n");
    *low +=1;

}else if(aveSpeed >= 70.0 && aveSpeed <=110.0){
    printf("Normal \n");
    *med +=1;

}else if(aveSpeed>110.0){
    printf("Fast!\n");
    *high +=1;

}else{
    printf("Invalid input!\n");
}

}


void minmax(int id, float pressure,
	    int *idmin, float *pmin,
	    int *idmax, float *pmax,
	    int counter)
{
  if(counter == 1){
    *idmin = id;
    *idmax = id;
    *pmin = pressure;
    *pmax = pressure;
  }else{

    if(*pmin > pressure){
      *idmin = id;
      *pmin = pressure;
    }else if(*pmax < pressure){
      *idmax = id;
      *pmax = pressure;
    }

  }

  printf("ID for max. speed: %d with %f km/h \n", *idmax, *pmax);
  printf("ID for min. speed: %d with %f km/h \n", *idmin, *pmin);


}
