#include<stdio.h>

int main(void){
	char str[5+1]={0};
	
	for(int i=0;i<5;i++){
		scanf("%c",&str[i]);
		getchar();
	}
	str[5]='\0';
	
	for(int i=4;i>=0;i--){
		printf("%c",str[i]);
	}

	printf("\n");
	
	return 0;
}
