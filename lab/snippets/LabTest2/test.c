#include<stdio.h>

int main()
{
  char name[50], c;
  int id, power[3];

  int a=3, b=2;
  float ave;

  ave = a/b;
  printf("%f\n", ave); //will give the wrong answer!

  printf("Enter driver's name:\n");
  //scanf("%s", &name);
  scanf("%s", name);

  printf("Name entered: %s\n", name);
  
}
