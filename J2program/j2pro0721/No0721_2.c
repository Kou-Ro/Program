#include <stdio.h>

int main(void){
	char ranText[] = "K3H2G1A5";
	char plainText[BUFSIZ] = {0};
	int plainCount = 0;

	char ci = 0;
	int time = 0;
	for(int i = 0; ranText[i] != 0; i++){
		if(ranText[i] >= '0' && ranText[i] <= '9'){
			time *= 10;
			time += ranText[i] - '0';
		}
		else{
			for(int j = 0; j < time; j++){
				printf("%c",ci);
			}
			ci = ranText[i];
			time = 0;
		}
	}


	for(int j = 0; j < time; j++){
		printf("%c",ci);
	}
	printf("\n");

	return 0;
}
