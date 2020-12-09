#include<stdlib.h>
#include<stdio.h>

#define rows 7
#define cols 2

int max(int a, int b); //function prototype

int main()
{

int table[rows][cols]; //array

int i, j;

/*initiate table content*/
for(i=0; i<7; ++i){
	table[i][0] = i+1;
	table[i][1] = 0;
	printf("%d\t%d\n", table[i][0], table[i][1]);
	}

/*input API*/
int api;
for(i=0; i<7; ++i){
	printf("Enter API value:\n");
	scanf(" %d", &api);
	table[i][1] = api; 
	}

printf("\n");
printf("API index table\n");
printf("Day\t API\n");
for(i=0; i<7; ++i){
	printf("%d\t%d\n", table[i][0],table[i][1]);
	}

/*Reading and classifying the table's data*/
int good, medium, bad;
good = 0;
medium = 0; 
bad = 0;
for(i=0; i<7; ++i){
	api = table[i][1];
	if(api<51){
		//good += 1; //cummulative
		good = good + 1;
		}
	else if(api>=51 && api <100){
		medium +=1;
		}
	else{
		bad +=1;
	}

	}

printf("Good API %d days\n", good);
printf("Medium API %d days\n", medium);
printf("Bad API %d days\n", bad);

/*Loop for finding min, max, average*/
int api_min;
int api_max;
float api_ave =0.0;
int counter =0;

api_min = table[0][1]; //data from Day 1
api_max = table[0][1];
for(i=0; i<7; ++i){

	if(api_min < table[i][1]){
		api_min = api_min; //remain
		}
	else{
		api_min = table[i][1]; //update the smaller
		}

/*another control branch*/
	if(api_max > table[i][1]){
		api_max = api_max;
		}
	else{
		api_max = table[i][1];
	}

//api_ave += table[i][1];
//counter += 1;

api_ave = api_ave + table[i][1];
counter = counter + 1;


	} //end of loop here

api_ave = (api_ave)/(float)counter;


printf("Minimum API %d\n", api_min);
printf("Maximum API %d\n", api_max);
printf("Average API %f\n", api_ave);

/*another way to get max value*/
int ref, api_max_func;
api_max_func = table[0][1];
for(i=0; i<7; ++i){
ref = table[i][1];
api_max_func = max(api_max_func, ref); //using function recursively
	}
printf("Maximum API %d\n", api_max_func);


}

int max(int a, int b)
{
if(a > b) return a;
if(b > a) return b;
}
