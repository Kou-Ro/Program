#include<stdio.h>

int main(void){
	int n=0;
	printf("Number : ");
	scanf("%d",&n);

	int nar[10]={0};
	for(int i=0;i<10;i++){
		nar[9-i]=n%10;
		n/=10;
	}
	
	int flag=0;

	for(int i=0;i<10;i++){
		if(nar[i]!=0||flag==1){
			printf("%d",nar[i]);
			flag=1;
			if(i%3==0&&i!=9){
				printf(",");
			}
		}
	}
	printf("\n");
	
	return 0;
}
