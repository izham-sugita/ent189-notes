#include<stdio.h>
#include<stdlib.h>

int main()
{
float sum, num;
int index, n;

sum = 0.0;
printf("Input the number of elements:\n");
scanf("%d", &n);

for(index=1; index<=n; ++index){
	printf("Enter a number:\n");
	scanf("%f", &num);
	sum +=num;
	}

float average = sum/(float)n;

printf("The total sum of all numbers entered: %f\n", sum);
printf("The average of all numbers entered: %f\n", average);

/*while-loop*/
sum =0.0;
index = 1;
while(index<=n){
	printf("Enter a number:\n");
	scanf("%f", &num);
	sum +=num;
	index +=1;
	}

average = sum/(float)n;

printf("\n");
printf("The total sum of all numbers entered: %f\n", sum);
printf("The average of all numbers entered: %f\n", average);

 
}
