#include<stdio.h>

void func(int n){
	for(int i=1;i<=n;i++){
		printf("%d:",i);
		if(i%3==0){
			printf("いまでしょ!\n");
			continue;
		}
		else{
			int cpi=i;
			for(int j=0;j<6;j++)
			{
				if(cpi%10==3){
					printf("いまでしょ!\n");
					break;
				}
				cpi/=10;
				if(cpi==0){
					printf("いつやるか?\n");
					break;
				}
			}
		}
	}
	return;
}

int main(void){
	int n=0;
	printf("1 ~ ");
	scanf("%d",&n);
	func(n);
	return 0;
}
