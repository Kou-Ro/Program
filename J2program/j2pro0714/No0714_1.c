#include <stdio.h>

int countStr(char str[]){
	int i = 0;
	
	while(str[i] != 0){
		i++;
	}

	return i;
}

int main(void){
	char str[]="KisarazuKosen";

	printf("%d\n",countStr(str));

	return 0;
}
