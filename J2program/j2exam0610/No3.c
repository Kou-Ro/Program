#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand((unsigned)time(NULL));

	int arr[10]={0};

	int max=0;
	int maxind=0;

	for(int i=0;i<10;i++){
	    int randn=rand()%101;
		if(randn>=max){
			max=randn;
			maxind=i;
		}
		arr[i]=randn;
		printf("%d ",randn);
	}

	printf("\n%d\n",maxind);
	
	return 0;
}
