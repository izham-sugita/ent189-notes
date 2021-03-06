#include<stdio.h>
#include<stdlib.h>

void displays(int vin, float dist, float elapsed_time, float *ave_speed)
{

  *ave_speed = dist/elapsed_time;
  
  printf("Vehicle ID: %d\n", vin);
  printf("Distance  : %f km \n", dist);
  printf("Elapsed time: %f hours\n ", elapsed_time);
  printf("Average speed: %f  km/h\n", *ave_speed);
}

void classification(float speed)
{
  if(speed<70.0){
    printf("Slow\n");
  }else if(speed>=70.0 && speed<=110.0){
    printf("Normal\n");
  }else if(speed>110.0){
    printf("Fast!\n");
  }else{
    printf("Invalid input\n");
  }
}

struct vehicle{
  int vin;
  float dist;
  float timed;
};

int main()
{

  //struct vehicle group1[3];

  struct vehicle *group1;

  /*Allocate memory*/
  group1 = (struct vehicle *)malloc(3*sizeof(struct vehicle) );
  
  int vin;
  float dist;
  float elapsed_time;
  float ave_speed;


  vin = 1900110;
  dist = 100.0;
  elapsed_time = 1.0;
  ave_speed = 0.0;

  /*Initiate data for all vehicle*/
  for(int i=0; i<10; ++i){
    group1[i].vin = vin;
    group1[i].dist = dist;
    group1[i].timed = elapsed_time;
  }

  /*Input data manually*/
  for(int i=0; i<3; ++i){
    printf("Input vehicle ID:\n");
    scanf("%d", &vin);
    printf("Input distance travelled:\n");
    scanf("%f", &dist);
    printf("Input elapsed time:\n");
    scanf("%f", &elapsed_time);

    group1[i].vin = vin;
    group1[i].dist = dist;
    group1[i].timed = elapsed_time;
    
  }
  
  
  displays(vin, dist, elapsed_time, &ave_speed);
  classification(ave_speed);
  
  
}
