#include<stdio.h>
#include<string.h> //strcpy, strcmp

int main()
{
char ans = 'y';
while(ans == 'y'){
	printf("Continue? y/n \n");
	scanf(" %c", &ans);
	}

 char longans[10];
 strcpy(longans, "yes");  //copying the long ans
 
 while( strcmp(longans, "yes") == 0 ){
   printf("Answer yes or no? \n");
   scanf("%s", longans);
 }
 
}
