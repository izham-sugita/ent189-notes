#include<stdlib.h>
#include<stdio.h>

int fun_proto(int, int);

int add2numbers(int a,int b){
  return a+b;
}

int returnnothing(){};

int smthg(){

  return 0;
}

int greeting(){
  printf("Hello!\n");
}

int main()
{

  int c;
  int a, b;
  printf("Enter two integer:\n");
  scanf("%d %d", &a, &b);

  c = add2numbers(a,b);
  printf("The added value of the two numbers: %d\n", c);

  c = returnnothing();
  greeting();
}

int func_proto(){


}
