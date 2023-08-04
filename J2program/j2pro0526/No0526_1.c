#include<stdio.h>
#include<stdbool.h>

int main(void){
	unsigned char uc =0;

	printf("%d\n",uc);
	uc++;
	while(true){
		if(uc!=0){
			printf("%d\n",uc);
			uc++;
		}
		else{
			break;
		}
	}
	return 0;
}

