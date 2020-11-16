#include <stdio.h>
#include <stdlib.h>
#include<math.h> // sqrt

int main()
{

float a, b, c;
float x1, x2;

printf("Enter the input for a, b, c\n");
scanf("%f %f %f", &a,&b,&c);

printf("a=%f b=%f c=%f\n", a, b, c);

float eps = 1.0e-6;

if ( a < eps ){
x1 = -c/b;
printf("The equation is a linear equation.\n");
printf("The solution is x = %f\n", x1);
exit(0);
};

//calculate discriminant
float disc;

disc = b*b - 4.0*a*c;

if( disc < eps ){
x1 = -b/(2*a);
printf("The solution is x1 = %f, x2 = %f\n", x1,x1);
}else{
    if( disc > 0.0 ){
    //use the formula
    x1 = (-b + sqrt(disc))/(2.0*a);
    x2 = (-b - sqrt(disc))/(2.0*a);
    printf("The solutions are x1=%f, x2=%f\n", x1,x2);
    }else{
    //solutions are complex number
    float xr, x1_im, x2_im;
    x1_im = sqrt( abs(disc) )/(2.0*a);
    x2_im = sqrt( abs(disc) )/(2.0*a);
    xr = -b/(2.0*a);
    printf("The solutions are, imaginary parts x1_im = %f, x2_im = %f\n", x1_im, x2_im);
    printf("The solution for the real part xr = %f\n", xr);

    }
};

/*
//test exceptions
if( disc > 0.0 ){
    if(disc < eps ){
        x1 = -b/ (2*a) ;
    }else{
    x1 = (-b + srt(disc))/(2.0*a);
    x2 = (-b - srt(disc))/(2.0*a);
    }
}
*/


}
