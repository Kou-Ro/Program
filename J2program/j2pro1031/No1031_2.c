#include <stdio.h>

int main(void){
	char num[3][11];
	for(int i = 0; i < 3; i++){
		printf("%d: ",i + 1);
		scanf("%s", &num[i]);
	}
	int out;
	printf("Number: ");
	scanf("%d", &out);
	for(int i = 0; i < 11; i++){
		printf("%c",num[out - 1][i]);
		if(i == 2 || i == 6){
			printf("-");
		}
	}
	printf("\n");

	return 0;
}
