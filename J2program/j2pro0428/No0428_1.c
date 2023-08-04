#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand((unsigned)time(NULL));
	int ans=rand()%100;
	
	int num=-1;
	while(num!=ans){
		printf("Your answer :");
		scanf("%d",&num);

		if(num<0||num>99){
			num=-1;
			printf("0から99の範囲で入力してください\n");
		}
		else if(num<ans){
			printf("答えはもっと大きいです\n");
		}
		else if(num>ans){
			printf("答えはもっと小さいです\n");
		}
	}
	
	printf("正解!!!!!!\n");

	return 0;
}
