#include<stdio.h>

void decimal2binary(char num);

int main(void){
	char num=0;
	printf("num : ");
	scanf("%d",&num);
	
	decimal2binary(num);

	return 0;
}

void decimal2binary(char num){
	int bin[8]={0};
   	for(int i=8-1;i>=0;i--){
		bin[i]=num%2;
		num/=2;
   	}

   	int flag=0;
   	for(int i=0;i<8;i++){
		if(flag==1||bin[i]!=0)
	    {
		   printf("%d",bin[i]);
		   flag=1;
	    }
	}
	printf("\n");
	return;
}
