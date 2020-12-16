#include<stdio.h>

int main()
{
int i=0;

	do{
	if(i<3){
		i +=2;
		printf("%d\n", i);
		continue; //will continue inside this 
			  //condition as long as i<3
	}else{
	printf("%d\n", ++i);
	break;
	}

	}while(i<5);

}
