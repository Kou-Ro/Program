#include <stdio.h>

int main(void){
	
	int sum=0;
	for(int i=0;i<=99;i++){
		if(i%3==0){
			printf("%d\n",i);
			sum+=i;
		}
	}

	printf("sum: %d\n",sum);
	
	return 0;
}
