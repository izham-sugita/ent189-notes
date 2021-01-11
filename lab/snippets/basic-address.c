#include<stdio.h>

int main()
{
char letter;
letter = "A";
char *pv;
pv = &letter;
printf("%p\n", pv);
}
