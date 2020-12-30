#include<stdio.h>
#include<stdlib.h>

float array_doubled(float *arr, int N);

int main()
{

/*Define array*/
float *arr;
int N = 10;
arr = (float *)malloc( N*sizeof(float));

for(int i=0; i<N; ++i){
	arr[i] = 1.0;
	printf("arr[%d] = %f\n", i, arr[i]);
	}

printf("\n");

array_doubled(arr, N);
for(int i=0; i<N; ++i){
	printf("arr[%d] = %f\n", i, arr[i]);
	}

}

float array_doubled(float *arr, int N)
{
for(int i=0; i<N; ++i)
	{
		arr[i] = 2.0*arr[i];
	}
}
