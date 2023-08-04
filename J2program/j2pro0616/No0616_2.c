#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int sum=0;
	int max=0;
	srand((unsigned)time(NULL));
	
	for(int i=0;i<614;i++){
		int num=rand()%2024;
		sum+=num;
		if(num>max)max=num;
	}

	printf("(1) sum = %d\n",sum);
	printf("(2) ave = %lf\n",(double)sum/614.0);
	printf("(3) max = %d\n",max);

	return 0;
}
