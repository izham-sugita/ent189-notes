#include<stdlib.h>
#include<stdio.h>

// #include<math.h>

float square(float a); //function prototype

int main()
{
float x = 5.0;
float y;

y = square(x);
printf("y = %f\n", y);

return 0;
}

float square(float a)
{
return a*a;
}
