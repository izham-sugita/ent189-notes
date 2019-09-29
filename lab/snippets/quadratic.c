#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

  float a, b, c;
  float x1, x2;

  printf("This program solve the root of a quadratic equation\n");
  printf("given by ax^2 + bx + c = 0\n");
  printf("Enter the value of a,b and c:\n");
  scanf("%f %f %f", &a, &b, &c);

  /*Calculate the discriminant b^2 - 4ac*/
  float d = b*b - 4.0*a*c;

  if(d >= 0.0){
    if(d==0){
      x1 = -b/(2.0*a);
      printf("The solution is x = %f\n", x1);
    }else{
      x1 = (-b + sqrt(d))/(2.0*a);
      x2 = (-b - sqrt(d))/(2.0*a);
      printf("The solutions are: x1 = %f, x2 = %f\n", x1,x2);
    }
  }
  else{
    float abs_d = abs(d);
    float xreal = -b/(2.0*a);
    float xim = sqrt(abs_d)/(2.0*a);
    printf("The solutions are complex number and it's conjugate\n");
    printf("Real part: %f\n", xreal);
    printf("Imaginary part: %f\n", xim);
  }
  
}
