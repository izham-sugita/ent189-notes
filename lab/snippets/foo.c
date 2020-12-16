#include<stdio.h>
#include<stdlib.h>

int fun1(); // function prototype

int main()
{
int output;

output = fun1();
printf("%d\n", output);

}


int fun1()
{
return 1;
}
