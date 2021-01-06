#include<stdio.h>
#include<stdlib.h>

int main()
{
float a[10];
int n=10,i;
	
	for(i=0; i<n; ++i){
		scanf("%f", &a[i]);
	}

for(i=0; i<n; ++i){
printf("a[%d]=%f\n", i, a[i]);
}

}
