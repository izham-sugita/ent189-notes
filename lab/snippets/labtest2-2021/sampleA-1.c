#include<stdio.h>
#include<stdlib.h>
#include<string.h> // strcpy()

struct pumpdet{
	char name[10];
	int code;
	float power;
};


int main()
{


char ans = 'y';

struct pumpdet *ptotal;
struct pumpdet *pcopy;
struct pumpdet currentcopy;

/*Pump variables*/
char pName[10];
int pCode;
float pPower;

//initiate pcopy
pcopy = (struct pumpdet *)malloc(sizeof(struct pumpdet) );
ptotal = (struct pumpdet *)malloc(sizeof(struct pumpdet) );

int i = 0;
while( ans == 'y' ){

printf("Enter the brand of the pump: \n");
scanf("%s", pName);
printf("Enter the pump's code: \n");
scanf("%d", &pCode);
printf("Enter the pump's power: \n");
scanf("%f", &pPower);

//the loop will stop immediately if ans='n'
printf("Continue? (y)es\(n)o \n");
scanf(" %c", &ans);

//update counts
i +=1;

//resizing ptotal
free(ptotal);
ptotal = (struct pumpdet *)malloc( i*sizeof(struct pumpdet) );
//update latest item
ptotal[i-1].code = pCode;
ptotal[i-1].power = pPower;
strcpy(ptotal[i-1].name, pName);
//reverse copy
for(int id=0; id<(i-1); ++id ){
	ptotal[id].code = pcopy[id].code ;
	ptotal[id].power = pcopy[id].power;
	strcpy(ptotal[id].name, pcopy[id].name);
	} 
//resize pcopy
free(pcopy);
pcopy = (struct pumpdet *)malloc( i*sizeof(struct pumpdet) );
//copy ptotal to pcopy for previous value storage
for(int id=0; id<i; ++id){
	pcopy[id].code = ptotal[id].code ;
	pcopy[id].power = ptotal[id].power;
	strcpy(pcopy[id].name, ptotal[id].name);
	}

}

printf("%d\n", i);
for(int id=0; id<i; ++id){
printf("pcopy: %s, %d, %f\t ptotal: %s, %d, %f\n",
	pcopy[id].name, pcopy[id].code, pcopy[id].power,
	ptotal[id].name, ptotal[id].code, ptotal[id].power  );
}

}
