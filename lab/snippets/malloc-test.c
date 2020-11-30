#include<stdio.h>
#include<stdlib.h>

struct Student{
char *name;
int matrix;
float cgpa;
};

int main()
{

float *arr;
arr = (float *)malloc(10*sizeof(float));

struct Student *g20;

g20 = (struct Student *)malloc(10*sizeof(struct Student));

free(arr);
free(g20);

FILE *fp;
fp = fopen("dummy.txt", "w");
fprintf(fp, "The quick brown fox\n");
fclose(fp);

}
