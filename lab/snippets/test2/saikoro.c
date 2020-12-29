#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  srand(time(0));
  
  //printf("%d\n", RAND_MAX);
  //printf("%d\n", rand());
  int throwcounts=10000000;
  int throw;
  int odd=0, even=0;
  /*saikoro throw*/
  for(int i=0; i<throwcounts; ++i){
    throw = rand()%6 + 1;
    //printf("%d\n", throw);
    if( throw%2 == 0){
      ++even;
    }else{
      ++odd;
    }
  }

  double odd_prob, even_prob;
  odd_prob = (double)odd / (double)throwcounts;
  even_prob = (double)even / (double)throwcounts;

  printf("Odd number probability: %lf\n", odd_prob);
  printf("Even number probability: %lf\n", even_prob);

  //printf("%ld\n", time(0));
}
