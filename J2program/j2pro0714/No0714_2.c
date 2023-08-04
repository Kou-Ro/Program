#include <stdio.h>

int countWord(char str[]){
	int i = 0;
	
	while(str[i] != 0){
		i++;
	}

	char flagSpace = 0;
	char wordCount = 0;

	for(int j = 0; j < i; j++){
		if(flagSpace == 0){
			if(str[j] == ' '){
				flagSpace=1;
				wordCount++;
			}
		}
		else{
			if(str[j] != ' '){
				flagSpace=0;
			}
		}
	}
	wordCount++;
}

int main(void){
	char str[]="Kisarazu Kougyou Koutou Senmon Gakkou";

	printf("%d\n",countWord(str));

	return 0;
}
