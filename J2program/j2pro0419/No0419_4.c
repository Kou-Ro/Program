#include <stdio.h>

int main(void){
	int sum=0;
	scanf("%d",&sum);
	int kahei[8]={5000,1000,500,100,50,10,5,1};
	int oturi[8]={0};

	for(int i=0;i<8;i++){
		oturi[i]=sum/kahei[i];
		sum=sum%kahei[i];
	}

	for(int i=0;i<8;i++){
		printf("%d -> %d\n",kahei[i],oturi[i]);
	}

	return 0;
}
