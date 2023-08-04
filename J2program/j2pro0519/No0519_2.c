#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int takarakuji(int vol,int null);

int main(void){
	int sum=-30000;
	srand((unsigned)time(NULL));
	for(int i=0;i<100;i++){
		sum+=takarakuji(rand()%100+1,rand()%100000+100000);
	}

	printf("%d\n",sum);

	return 0;
}
