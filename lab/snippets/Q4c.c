#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int dayno;
	float temp;
	float hum;
	}daydata;

int main()
{
	int num;
	float temp;
	float hum;
 daydata myday[3];
 for(int i=0; i<3; ++i){
	 printf("Enter day's number, temperature and humidity: \n");
	 scanf(" %d %f %f", &num, &temp, &hum );
	 
	 myday[i].dayno = num;
	 myday[i].temp = temp;
	 myday[i].hum = hum;
	 
	 }
	
FILE *fp;
fp = fopen("greenhouse.txt","w");
for(int i=0; i<3; ++i){
fprintf(fp,"%d %f %f\n", myday[i].dayno, myday[i].temp, myday[i].hum);
}
fclose(fp);

fp = fopen("greenhouse.txt","r");
int end;
end = fscanf(fp,"%d %f %f", &num, &temp, &hum ); //first line
rewind(fp);
while(end !=EOF ){
	end = fscanf(fp,"%d %f %f", &num, &temp, &hum );
	printf("%d %f %f\n", num, temp, hum);
	}
	
}
