#include<stdlib.h>
#include<stdio.h>

// #include<math.h>

float square(float a); //function prototype
float add(float a, float b); // function prototype

float doubled(float *a); 
 
int main()
{
float x = 5.0;
float y;

float a = 1.0, b = 2.0;

y = square(x);
printf("y = %f\n", y);
printf("x = %f\n", x);

doubled(&x);
printf("x = %f\n", x);

y = add(a,b);
printf("y = %f\n", y);

doubled(&y);
printf("y = %f\n", y);

return 0;
}

float square(float a)
{
return a*a;
}

float add(float a, float b)
{
return a+b;
}

float doubled(float *a)
{

*a = 2.0 *(*a);

}
