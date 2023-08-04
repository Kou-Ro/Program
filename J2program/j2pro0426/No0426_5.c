#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int sum [6]={0};
	int times;
	int level;
	printf("times ");
	scanf("%d",&times);
	printf("level ");
	scanf("%d",&level);
	int next;	
	srand((unsigned)time(NULL));

	int randn;

	for(int i=0;i<times;i++){
		if(next==0){
			next=rand()%level;
			sum[1]++;
			i++;
		}
		else next--;
		randn=rand()%6+1;
//		printf("%d\n",randn);
		sum[randn-1]++;
	}
	printf("=========================\n");
	for(int i=0;i<6;i++){
		printf("%d  %d  %f\%\n",i+1,sum[i],((float)sum[i]/times)*100);
	}

	return 0;
}
